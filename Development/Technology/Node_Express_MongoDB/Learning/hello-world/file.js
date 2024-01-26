const fs = require("fs");
const os = require("os");

console.log(os.cpus().length);

// ------------------------------- WriteFile
// Sync..
// fs.writeFileSync("./test.txt", "Akash is great");

// Async..
// fs.writeFile("./test.txt", "Akash is great async \n Good", (err) => {
//   console.error(err);
// });

// ------------------------------- Read File

// Sync..
// const fileContent = fs.readFileSync("./test.txt", "utf-8");
// console.log(fileContent);

// Async..
// fs.readFile("./test.txt", "utf-8", (err, content) => {
//   if (err) {
//     console.log("Error file reading file ", err);
//   } else {
//     console.log(content);
//   }
// });
