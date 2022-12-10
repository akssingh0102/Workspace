const fs = require('fs');

// // Blocking Scynchronous way
// // if we dont't define format to utf-8 we'll just get a buffer (un-readable) format
// // READING
// const textIn =  fs.readFileSync('./txt/input.txt', 'utf-8');

// const textOut = `Information about Avocado:\n${textIn}\ncreated on:${Date.now()}`;

// // WRITING
// fs.writeFileSync('./txt/output.txt', textOut);
// console.log('File is written !!');


// Non-Blocking Ascynchronous way

fs.readFile('./txt/start.txt', 'utf-8',(err, data1) => {
    fs.readFile(`./txt/${data1}.txt`, 'utf-8',(err, data2) => {
        console.log(data2);
        fs.readFile(`./txt/append.txt`, 'utf-8',(err, data3) => {
            console.log(data3);
            fs.writeFile('./txt/final.txt', `${data2}\n${data3}` , 'utf-8' , err => {
                console.log(`Your file have been written  😄!!`);
            });
        });
    });
});