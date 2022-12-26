const fs = require("fs");
const superagent = require("superagent");

fs.readFile(`${__dirname}/dog.txt`, "utf8", (err, data) => {
    console.log(`Breed : ${data}`);

    //   Callback Hell
    superagent
        .get(`https://dog.ceo/api/breed/${data}/images/random`)
        .then((res) => {
            console.log(res.body.message);

            fs.writeFile("dog-img.txt", res.body.message, (err) => {
                if (err) {
                    return console.log(err.message);
                }
                console.log("Dog image saved to dog-img.txt");
            });
        })
        .catch((err) => { 
            console.log(err.message);            
        });
});