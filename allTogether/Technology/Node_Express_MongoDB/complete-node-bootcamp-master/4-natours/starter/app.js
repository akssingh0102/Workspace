const express = require('express');
const fs = require('fs');
const morgan = require('morgan');

const app = express();
const port = 3000;

// 1. MIDDLEWARE
app.use(express.json());

app.use((req, res, next) => {
  console.log('Hello from the Middleware 😎');

  // Important, otherwise req, res cycle will get stuck here
  next();
});

const tours = JSON.parse(
  fs.readFileSync(`${__dirname}/dev-data/data/tours-simple.json`)
);

// 2. ROUTE HANDLER
const getAllTours = (req, res) => {
  res.status(200).json({
    status: 'success',
    results: tours.length,
    data: {
      tours,
    },
  });
};

const getTour = (req, res) => {
  // console.log(req.params); //req.params is how we’ll get all the URL parameters

  const id = req.params.id * 1; // param are strig this will convert it into int

  // find will iterate over the array with the specified
  // condition and find the element
  const tour = tours.find((el) => el.id == id);

  if (!tour) {
    res.status(404).send({
      status: 'failed',
      message: 'invalid Id',
    });
  } else {
    res.status(200).json({
      status: 'success',
      data: {
        tour,
      },
    });
  }
};

const createTour = function (req, res) {
  // console.log(req.body);

  const newId = tours[tours.length - 1].id + 1;
  const newTour = Object.assign({ id: newId }, req.body);

  tours.push(newTour);
  fs.writeFile(
    `${__dirname}/dev-data/data/tours-simple.json`,
    JSON.stringify(tours),
    (err) => {
      if (err) res.status(401).send(err);
      else {
        res.status(201).send({
          status: 'success',
          data: newTour,
        });
      }
    }
  );
};

const updateTour = function (req, res) {
  const id = req.params.id * 1;

  const tour = tours.find((el) => el.id == id);

  // We can write the login of updating the tour here

  if (!tour) {
    res.status(404).send({
      status: 'failed',
      message: 'invalid Id',
    });
  } else {
    res.status(200).send({
      status: 'success',
      data: {
        tour: '<Updated tour here>',
      },
    });
  }
};

const deleteTour = function (req, res) {
  const id = req.params.id * 1;

  const tour = tours.find((el) => el.id == id);

  // We can write the login of deleting the tour here

  if (!tour) {
    res.status(404).send({
      status: 'failed',
      message: 'invalid Id',
    });
  } else {
    res.status(204).send({
      status: 'success',
      data: null,
    });
  }
};

// app.get('/api/v1/tours', getAllTours);
// app.get('/api/v1/tours/:id', getTour);
// app.post('/api/v1/tours', createTour);
// app.patch('/api/v1/tours/:id', updateTour);
// app.delete('/api/v1/tours/:id', deleteTour);

// 3. ROUTES
app.route('/api/v1/tours').get(getAllTours).post(createTour);

app
  .route('/api/v1/tours/:id')
  .get(getTour)
  .patch(updateTour)
  .delete(deleteTour);

// 4. START SERVER
app.listen(port, () => console.log(`Example app listening on port ${port}!`));
