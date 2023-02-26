const express = require("express");
const https = require("https");
const bodyParser = require("body-parser"); 

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", function (req, res) {
  res.sendFile(__dirname + "/index.html");
});

app.post("/", function (req, res) {
  console.log("POST request to the homepage");
  const basrUrl = "https://api.openweathermap.org/data/2.5/weather";
  const query = req.body.cityName;
  const apiKey = "1bb9726d3f56e92aafa74e369c358ea9";
  const unit = "metric";
  const url = basrUrl + "?q=" + query + "&appid=" + apiKey + "&units=" + unit;
  // GET request through https package of Node
  https.get(url, function (response) {
    console.log(response.statusCode);

    // This will only get trgerred when we recieve, data in response
    response.on("data", function (data) {
      const weatherData = JSON.parse(data);
      const weatherDiscription = weatherData.weather[0].description;
      const temp = weatherData.main.temp;
      const iconValue = weatherData.weather[0].icon;
      const imageURL =
        "http://openweathermap.org/img/wn/" + iconValue + "@2x.png";

      res.write("<p> The weather is currently" + weatherDiscription + "</p>");
      res.write(
        "<h1>Temperature in " + query + " is " + temp + " degree Celcius.</h1>"
      );
      res.write("<img src='" + imageURL + "'>");
      res.send();
    });
  });
});

var port = 3000;
app.listen(port, function () {
  console.log("Server is running on PORT:" + port);
});
