const fs = require('fs');

const tours = JSON.parse(
  fs.readFileSync(`${__dirname}/../dev-data/data/tours-simple.json`)
);

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
  const id = req.params.id * 1;
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

const createTour = (req, res) => {
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

const updateTour = (req, res) => {
  const id = req.params.id * 1;
  const tour = tours.find((el) => el.id == id);

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

const deleteTour = (req, res) => {
  const id = req.params.id * 1;
  const tour = tours.find((el) => el.id == id);

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

module.exports = { getAllTours, getTour, createTour, updateTour, deleteTour };
