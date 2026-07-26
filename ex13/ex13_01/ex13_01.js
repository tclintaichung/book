const express = require('express');
const foods = [
  { name: 'beef', amount: '2kg' },
  { name: 'chicken', amount: '1.5kg' },
  { name: 'pork', amount: '1kg' }
];

const app = express();
app.use(express.json());
app.use(express.static(__dirname));

app.get('/', (req, res) => {
  res.sendFile('./index.html');
});
app.get('/foods/:food', (req, res) => {
  const {food} = req.params;
  const foodFound = foods.find(f => f.name === food);
  if (foodFound) {
    res.send(foodFound);
  } else {
    res.status(404).send({ error: 'Food not found' });
  }
});
app.post('/user', (req, res) => {
  console.log(req.body);
  const { name, email } = req.body;
  console.log(`Received info: Name: ${name}, Email: ${email}`);
  res.send({ name, email });
});

const PORT = process.env.PORT || 3000;

app.listen(PORT, "0.0.0.0",() => {
  console.log(`Server is running on port ${PORT}`);
});
