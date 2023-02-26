const express = require("express");
const bodyParser = require("body-parser");
const day = require(__dirname + "/dates.js" );

const app = express(); 
app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({extended: true}));
app.use(express.static("public"));
let items = ["Eat", "Sleep", "Code", "Repeat"];
let workItems = [];


app.get("/", function(_req, res){        
    res.render("lists", {listTitle:day.getDate(), items:items});
});

app.post("/", function(req,res){ 
    let item = req.body.newItem; 
    items.push(item);

    res.redirect("/");
});

app.get("/work", function(_req,res){
    res.render("lists", {listTitle:"Work", items:workItems});
});

app.post("/work", function(req,res){
    let item = req.body.newItem; 
    workItems.push(item);

    res.redirect("/work");
});


let port = 3000;
app.listen(port,function(){
    console.log("Server started on port ", port);
})