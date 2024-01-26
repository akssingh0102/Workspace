const express = require("express");
const bodyParser = require("body-parser");
const mongoose = require("mongoose");

const app = express();
const port = 8000;

// CONNECTION
mongoose
  .connect("mongodb://127.0.0.1:27017/youtube-app-1")
  .then(() => console.log("MongoDB connected"))
  .catch((err) => console.log(`Error while connecting to MongoDB : ${err}`));

// SCHEMA
const userSchema = new mongoose.Schema(
  {
    firstName: {
      type: String,
      required: true,
    },
    lastName: {
      type: String,
      required: false,
    },
    email: {
      type: String,
      required: true,
      unique: true,
    },
    jobTitle: {
      type: String,
    },
    gender: {
      type: String,
    },
  },
  { timestamps: true }
);

const User = mongoose.model("user", userSchema);

// MIDDLEWARE
app.use(express.urlencoded({ extended: false }));
app.use(bodyParser.json());

// Routes
app.get("/users", async (req, res) => {
  const allDBUsers = await User.find({});
  const html = `
    <ul>
        ${allDBUsers.map((user) => `<li>${user.firstName}</li>`).join("")}
    </ul>
    `;
  res.send(html);
});

// REST API
app.get("/api/users", async (req, res) => {
  const allDBUsers = await User.find({});
  res.json(allDBUsers);
});

app
  .route("/api/users/:id")
  .get(async (req, res) => {
    const userId = req.params.id
    const user = await User.findById(userId)
    res.json(user);
  })
  .patch((req, res) => {
    // TODO: edit user with id
    const id = req.params.id;
    res.json({ status: "pending", response: 200 });
  })
  .delete((req, res) => {
    // TODO: delete user with id
    const id = req.params.id;
    res.json({ status: "pending", response: 200 });
  });

app.post("/api/users", async (req, res) => {
  const { firstName, lastName, email, jobTitle, gender } = req.body;

  if (!firstName || !lastName || !email || !jobTitle || !gender) {
    return res.status(400).json({ msg: "All fields are req.. !" });
  }

  const result = await User.create({
    email,
    firstName,
    gender,
    jobTitle,
    lastName,
  });
  res.status(201).json({ result, msg: "success" });
});

app.listen(port, () => console.log(`Example app listening on port ${port}!`));
