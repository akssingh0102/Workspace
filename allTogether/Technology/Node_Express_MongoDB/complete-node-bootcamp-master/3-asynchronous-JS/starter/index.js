const fs = require("fs");
const superagent = require("superagent");

// We are using the same readFile function just binding it inside amother function that returns a promise
const readFilePro = (file) => {
    // Here in this function all of out work is being done it is called a "executor" function
    return new Promise((resolve, reject) => {
        fs.readFile(file, "utf8", (err, data) => {
            if (err) {
                // What ever we reject here will be present at the "catch" handler of the promise
                reject(`ERROR occured while reading file : ${err}`);
            } else {
                // What ever we resolve here will be present at the "then" handler of the promise
                resolve(data);
            }
        });
    });
};

const writeFilePro = (file, data) => {
    return new Promise((resolve, reject) => {
        fs.writeFile(file, data, (err) => {
            if (err) {
                reject(`ERROR while writing in file with filepath : ${file}`);
            } else {
                resolve("SUCCESS");
            }
        });
    });
};

const getDogPic = async () => {
    try {
        const data = await readFilePro(`${__dirname}/dog.txt`);
        console.log(`Breed : ${data}`);

        // We are saving promises in res, res2, res3 as we know superagent will reuturn promise if don't add await on it
        const res = superagent.get(`https://dog.ceo/api/breed/${data}/images/random`);

        const res2 = superagent.get(`https://dog.ceo/api/breed/${data}/images/random`);

        const res3 = superagent.get(`https://dog.ceo/api/breed/${data}/images/random`);

        // we'll pass an array containing all the above 3 promises and await for it (all 3 promises will run at teh same time)
        const all = await Promise.all([res, res2, res3]);
        const imgs = all.map(el => el.body.message);

        console.log(imgs);

        await writeFilePro("dog-img.txt", imgs.join('\n'));
        console.log("Dog image saved to dog-img.txt");
    } catch (err) {
        console.log(err);
    }
};
getDogPic();

/*
// ***** Using Promise Chaining *****
readFilePro(`${__dirname}/dog.txt`)
    .then((data) => {
        console.log(`Breed : ${data}`);
        return superagent.get(`https://dog.ceo/api/breed/${data}/images/random`);
    })
    .then((res) => {
        console.log(res.body.message);
        return writeFilePro("dog-img.txt", res.body.message);
    })
    .then(() => {
        console.log("Dog image saved to dog-img.txt");
    })
    .catch((err) => {
        console.log(err);
    });
*/

// ****** Normal Way (Callback Hell) *****
// fs.readFile(`${__dirname}/dog.txt`, "utf8", (err, data) => {
//     console.log(`Breed : ${data}`);

//     //   Callback Hell
//     superagent
//         .get(`https://dog.ceo/api/breed/${data}/images/random`)
//         .then((res) => {
//             console.log(res.body.message);

//             fs.writeFile("dog-img.txt", res.body.message, (err) => {
//                 if (err) {
//                     return console.log(err.message);
//                 }
//                 console.log("Dog image saved to dog-img.txt");
//             });
//         })
//         .catch((err) => {
//             console.log(err.message);
//         });
// });
