const { getFood, postFood, putFood, deleteFood} = require("../controllers/food-controllers.js");
const express = require("express");
const router = express.Router();

router.get("/", getFood);
router.post("/", postFood);
router.put("/", putFood);
router.delete("/", deleteFood);

module.exports = router;