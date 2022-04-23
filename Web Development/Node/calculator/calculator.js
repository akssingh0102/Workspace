const express = require("express");
var bodyParser = require("body-parser");
 
const app = express();
var port = 3000;

app.use(bodyParser.urlencoded({ extended: true }));

// GET handler for calculator 
app.get("/", function (request, response) {
  response.sendFile(__dirname + "/index.html");
});

//Get handler for BMI calculator
app.get("/bmiCalculator", function (request, response) {
    response.sendFile(__dirname + "/bmiCalculator.html");
  });

//calculator POST handler 
app.post("/", function (request, response) {
  var num1 = Number(request.body.num1);
  var num2 = Number(request.body.num2);
  var result = num1 + num2;

  response.send("The result of calculation is : " + result);
  console.log("The result of calculation is : " + result);
});

// BMI calculator POST handler
app.post("/bmiCalculator", function (request, response) {
    var weight = parseFloat(request.body.weight);
    var height = parseFloat(request.body.height);
    var result =  parseFloat(weight/(height*height));
    console.log("weight : " + weight);
    console.log("height : " + height);
  
    response.send("Your Body Mass Index is : " + result);
    console.log("Your Body Mass Index is : " + result);
  });

app.listen(port, function () {
  // function() is a call back funtion
  console.log("Server started on port " + port);
});
