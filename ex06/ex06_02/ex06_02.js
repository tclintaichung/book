import promptSync from 'prompt-sync';
const prompt = promptSync();

const GAUGE_RATE = 35.7;
const WATER_UNIT = [7.35, 9.45, 11.55, 12.0750];
const DEDUCT_RATE = [0., 21.0, 84.0, 110.25];

function waterRate(consumption) {
  let rate = 0.0;

  if (consumption <= 0) {
    rate = 0.0;
  } else if (consumption <= 10) {
    rate = consumption * WATER_UNIT[0] - DEDUCT_RATE[0];
  } else if (consumption <= 30) {
    rate = consumption * WATER_UNIT[1] - DEDUCT_RATE[1];
  } else if (consumption <= 50) {
    rate = consumption * WATER_UNIT[2] - DEDUCT_RATE[2];
  } else {
    rate = consumption * WATER_UNIT[3] - DEDUCT_RATE[3];
  }
  return Math.round(rate + GAUGE_RATE);
}

function main() {
  let consumption = 0.0;
  let waterFee = 0.0;
  do {
    console.log("Enter your water consumption (in m^3): ");
    consumption = parseFloat(prompt());
    if (consumption < 0) {
      console.log("Invalid consumption. Exiting.");
      break;
    }
    waterFee = waterRate(consumption);
    console.log("Your water fee is: NT$" + waterFee);
  } while (true);
  return 0;
}

main();