const express = require("express");
const bodyParser = require("body-parser");
const request = require("request");
const https = require("https");

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));
// to use local files on the server (Eg. styles.css and images)
app.use(express.static("public"));

app.get("/", (req, res) => {
  console.log("GET request to the homepage");

  res.sendFile(__dirname + "/signup.html");
});

app.post("/", function (req, res) {
  console.log("POST request to the homepage");
  const firstName = req.body.fName;
  const lastName = req.body.lName;
  const email = req.body.email;

  // data accordin to mail chimp (https://mailchimp.com/developer/marketing/api/lists/batch-subscribe-or-unsubscribe/)
  var data = {
    members: [
      {
        email_address: email,
        status: "subscribed",
        merge_fields: {
          FNAME: firstName,
          LNAME: lastName,
        },
      },
    ],
  };

  const jasonData = JSON.stringify(data);
  const url = "https://us14.api.mailchimp.com/3.0/lists/ffd89248b0";
  const options = {
    method: "POST",
    auth: "akash1:2476a4d33ae562df9850351f6a5787c8-us14",
  };
  // POST request using https module of Node (Read : https://nodejs.org/api/https.html#httpsrequesturl-options-callback)
  const requests = https.request(url, options, function (response) {
      if(response.statusCode === 200){
          res.sendFile(__dirname + "/success.html");
      }
      else{
        res.sendFile(__dirname + "/failure.html");
      }
    response.on("data", function (data) {
      console.log(JSON.parse(data));
    });
  });

  // adding json data to request
  requests.write(jasonData);
  requests.end();
  // here we will be able to see new contacts https://us14.admin.mailchimp.com/lists/members/#p:1-s:25-sa:last_update_time-so:false
  console.log(firstName + " " + lastName + " " + email);
});

app.post('/failure', function (req, res) {
  console.log('POST request to the Failure Page');
  // res.redirect redirect to a perticulat route, This will trigger the app.get which will ultimately load the signup.html 
  res.redirect("/");
});

const port = 3000;
app.listen(process.env.PORT ||  port, function () {
  console.log("Server is running on port " + port);
});

//  API Key
//  2476a4d33ae562df9850351f6a5787c8-us14

// List id or Audience ID
// ffd89248b0
