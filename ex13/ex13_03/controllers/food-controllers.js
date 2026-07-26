const Food = require("../models/food-models.js"); 

const getFood = async (req, res) => {
  try {
    const { name } = req.query;
    if (name) {
      const foods = await Food.find({name: name});
      res.json(foods);
    }
    else {
      const foods = await Food.find({});
      res.json(foods);
    }
  } catch (error) {
    console.error("Error fetching Foods:", error); 
    res.status(500).json({ message: error.message });
  }
}
const postFood =  async (req, res) => {
  try {
    const food = await Food.create(req.body);
    res.status(201).json(food);
  } catch (error) {
    console.error("Error saving Food:", error);
    res.status(500).json({message: error.message});
  }
}
const putFood = async (req, res) => {
  try {
    const {_id} = req.body;
    const food = await Food.findByIdAndUpdate({_id: _id}, req.body, {new: true});
    res.status(200).json(food);
  } catch (error) {
    console.error("Error saving Food:", error);
    res.status(500).json({message: error.message});
  }
}
const deleteFood = async (req, res) => {
  try {
    const { _id } = req.query;
    const food = await Food.findByIdAndDelete(_id);
    res.status(200).json(food);
  } catch (error) {
    console.error("Error fetching Foods:", error); 
    res.status(500).json({ message: error.message });
  }
}
module.exports  = {
  getFood,
  postFood,
  putFood,
  deleteFood
}