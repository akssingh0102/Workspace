const fs = require('fs');

const tours = JSON.parse(
    fs.readFileSync(`${__dirname}/../dev-data/data/tours-simple.json`)
);

const checkId = (req, res, next, val) => {
    console.log(`Tour id is: ${val}`);
    const id = val * 1;
    const tour = tours.find((el) => el.id == id);

    if (!tour) {
        return res.status(404).json({
            status: 'failed',
            message: 'invalid Id',
        });
    }

    next();
};

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
    const id = req.body.id * 1;
    const tour = tours.find((el) => el.id == id);
    res.status(200).json({
        status: 'success',
        data: {
            tour,
        },
    });
};

const createTour = (req, res) => {
    const newId = tours[tours.length - 1].id + 1;
    const newTour = Object.assign({ id: newId }, req.body);

    tours.push(newTour);
    fs.writeFile(
        `${__dirname}/../dev-data/data/tours-simple.json`,
        JSON.stringify(tours),
        (err) => {
            if (err) res.status(401).send(err);
            else {
                res.status(201).json({
                    status: 'success',
                    data: newTour,
                });
            }
        }
    );
};

const updateTour = (req, res) => {
    const id = req.body.id * 1;
    const tour = tours.find((el) => el.id == id);
    res.status(200).json({
        status: 'success',
        data: {
            tour: '<Updated tour here>',
        },
    });
};

const deleteTour = (req, res) => {
    const id = req.body.id * 1;
    const tour = tours.find((el) => el.id == id);
    res.status(204).json({
        status: 'success',
        data: null,
    });
};

const checkBody = (req, res, next) => {
    if (!req.body.name || !req.body.price) {
        return res.status(400).json({
            status: 'fail',
            message: 'missing name of price',
        });
    }
    next();
};

module.exports = {
    getAllTours,
    getTour,
    createTour,
    updateTour,
    deleteTour,
    checkId,
    checkBody,
};
