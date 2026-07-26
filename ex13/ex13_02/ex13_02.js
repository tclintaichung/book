const mongoose = require("mongoose");
const foodSchema = new mongoose.Schema({
  name: String,
  description: String,
  storagePlace: String,
  expiryDate: Date
});

const Food = mongoose.model('Food', foodSchema);

mongoose.connect('mongodb://localhost:27017/myDb')
	.then(() => {
  		console.log("Connected to MongoDB");
  	})
    .then(() => {
        insertFood();
    })
  	.catch(err => {
  		console.error("Connection error", err);
  	});
async function insertFood() {
    const food1 = {
        name: 'eggs',
        description: '12',
        storagePlace: 'refrigerator',
        expiryDate: new Date('2025-08-01')
    }
    const food2 = {
        name: 'milk',
        description: '1958cc',
        storagePlace: 'refrigerator',
        expiryDate: new Date('2025-08-01')
    } 
    const food3 = {
        name: 'vegetable',
        description: '1',
        storagePlace: 'refrigerator',
        expiryDate: new Date('2025-12-26')
    }
    let result = await Food.collection.insertOne(food1);
    console.log('Food inserted:', result);
    result = await Food.collection.insertMany([food2, food3]);
    console.log('Foods inserted:', result);
    result = await Food.find();
    console.log('All foods:', result);
    Food.db.close();
}