const express = require('express');

const app = express(); 
var port = 3000;

app.get("/",function(request,response){ 
    response.send("<h1>Hello</h1>");
});

app.get("/news",function(request,response){
    response.send("<h1>News Paper ;)</h1>");
});

app.get("/about",function(request,response){
    response.send("My name is Akash and I love to code !!");
});

app.listen(port, function(){  // function() is a call back funtion 
    console.log("Server started on port " + port);
});