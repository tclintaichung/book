const cors = require('cors');

const corsOptions = {
  origin: ['http://127.0.1:3000'], // Allow requests from these origins
  optionsSuccessStatus: 200, // For legacy browser support
};

module.exports = cors(corsOptions);