const { json } = require('express');
const express = require('express');
const app = express();
const fs = require('fs');
const port = 3000;

// This express .json here is the middleware
app.use(express.json());

const tours = JSON.parse(
  fs.readFileSync(`${__dirname}/dev-data/data/tours-simple.json`)
);

// API to get total Tours
app.get('/api/v1/tours', (req, res) => {
  res.status(200).json({
    status: 'success',
    results: tours.length,
    data: {
      tours,
    },
  });
});

// Handling URL parameter
app.get('/api/v1/tours/:id', (req, res) => {
  // console.log(req.params); //req.params is how we’ll get all the URL parameters

  const id = req.params.id * 1;  // param are strig this will convert it into int

  // find will iterate over the array with the specified
  // condition and find the element
  const tour = tours.find(el => el.id == id);

  if (!tour) {
    res.status(404).send({
      status: 'failed',
      message: 'invalid Id'
    });
  } else {
    res.status(200).json({
      status: 'success',
      data: {
        tour
      },
    });
  }
});

// addng a new POST route
app.post('/api/v1/tours', function (req, res) {
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
          status: 'SUCCESS',
          data: newTour,
        });
      }
    }
  );
});

app.listen(port, () => console.log(`Example app listening on port ${port}!`));
