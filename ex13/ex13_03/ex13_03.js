const express = require("express");
const mongoose = require("mongoose");
const corsMiddle = require("./cors/food-cors.js");
const routeFood = require("./routes/food-routes.js");
const path = require('path');

const app = express();
const port = process.env.PORT || 3000;
app.use(corsMiddle);
app.use(express.json());
app.use(express.urlencoded({ extended: true }));  
// app.use(express.static("public")); 
app.use("/foods", routeFood);

const filePath = path.join(__dirname, 'public', 'hello.html');
app.get("/", (req, res) => {
  res.sendFile(filePath);
});
 
mongoose.connect('mongodb://localhost:27017/myDb')
.then(() => {
  console.log("Connected to MongoDB");
  app.listen(port, () => {
    console.log(`Server is running at http://localhost:${port}`);
  });
});