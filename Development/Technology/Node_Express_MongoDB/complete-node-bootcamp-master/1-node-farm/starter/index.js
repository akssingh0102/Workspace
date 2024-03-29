const fs = require('fs');
const http = require('http');
const { json } = require('stream/consumers');
const url = require('url');

const slugify = require('slugify');

const replaceTemplate = require('./modules/replaceTemplate');

//************************** FILES ********************************

// // Blocking Scynchronous way
// // if we dont't define format to utf-8 we'll just get a buffer (un-readable) format
// // READING
// const textIn =  fs.readFileSync('./txt/input.txt', 'utf-8');

// const textOut = `Information about Avocado:\n${textIn}\ncreated on:${Date.now()}`;

// // WRITING
// fs.writeFileSync('./txt/output.txt', textOut);
// console.log('File is written !!');


// Non-Blocking Ascynchronous way

// fs.readFile('./txt/start.txt', 'utf-8',(err, data1) => {
//     fs.readFile(`./txt/${data1}.txt`, 'utf-8',(err, data2) => {
//         console.log(data2);
//         fs.readFile(`./txt/append.txt`, 'utf-8',(err, data3) => {
//             console.log(data3);
//             fs.writeFile('./txt/final.txt', `${data2}\n${data3}` , 'utf-8' , err => {
//                 console.log(`Your file have been written  😄!!`);
//             });
//         });
//     });
// });


//************************** SERVER ********************************
// LOADINF TEMPLATE
const templateOverview = fs.readFileSync(`${__dirname}/templates/template-overview.html`, 'utf-8');
const templateProduct = fs.readFileSync(`${__dirname}/templates/template-product.html`, 'utf-8');
const templateCard = fs.readFileSync(`${__dirname}/templates/template-card.html`, 'utf-8');

// LOADING JSON DATA
const data = fs.readFileSync(`${__dirname}/dev-data/data.json`, 'utf-8');
const dataObj = JSON.parse(data);

const slugs = dataObj.map(ele => slugify(ele.productName, { lower: true }));
console.log(slugs);

const PORT = 8000;
const server = http.createServer((req, res) => {

    const { query, pathname } = url.parse(req.url, true);

        // OVERVIEW PAGE
    if (pathname === '/' || pathname === '/overview') {
        res.writeHead(200, { 'Content-type': 'text/html' });

        // Iterate over all the json obects of products and create a card template for it and save all
        // of this into cardHtml 
        const cardsHtml = dataObj.map(el => replaceTemplate(templateCard, el)).join('');
        const output = templateOverview.replace('{%PRODUCT_CARDS%}', cardsHtml);

        res.end(output);

        // PRODUCTS PAGE
    } else if (pathname === '/product') {
        res.writeHead(200, { 'Content-type': 'text/html' });
        console.log(`query: ${JSON.stringify(query)}`);
        const product = dataObj[query.id];
        const output = replaceTemplate(templateProduct, product);
        res.end(output);

        // API PAGE
    } else if (pathname === '/api') {
        res.writeHead(200, {
            'Content-type': 'application/json'
        });

        // becuse res.end expects an string not a JSON object(productData)
        res.end(data);

        // NOT-FOUND PAGE
    } else {
        res.writeHead(404, {
            'Content-type': 'text/html',
            'my-own-header': 'hello-world'
        });
        res.end(`<h1>PAGE NOT FOUND</h1>`);
    }
});

server.listen(PORT, '127.0.0.1', () => {
    console.log(`Listening to request on PORT:${PORT}`);
})
