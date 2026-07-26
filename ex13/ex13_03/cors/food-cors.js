const cors = require('cors');

const corsOptions = {
  origin: ['http://localhost:5500', 'http://127.0.0.1:5500',
    'http://localhost:8000', 'http://127.0.0.1:8000'], // Allow requests from these origins
  optionsSuccessStatus: 200, // For legacy browser support

module.exports = cors(corsOptions);