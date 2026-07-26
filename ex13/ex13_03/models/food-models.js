const mongoose = require('mongoose');
const Schema = mongoose.Schema;
const foodSchema = new Schema({
  name: {
    type: String,
    required: true
  },
  description: {
    type: String,
    required: false
  },
  expiryDate: {
    type: Date,
    required: false
  },
  place: {
    type: String,
    required: false
  },
  image: {
    type: String,
    required: false
  }
});

const Food = mongoose.model('Food', foodSchema);
module.exports = Food;