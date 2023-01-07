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
