import promptSync from 'prompt-sync';
const prompt = promptSync();

function standard(region) {
  let factor = [0.0, 0.0];
  switch (region) {
    case 1:  // US standard
      factor = [12000.0, 3.517];
      break;
    case 2: // Japan standard
      factor = [10000.0, 2.93];
      break;
    case 3: // Taiwan standard
      factor = [8000.0, 2.34];
      break;
    default:
      break;
  }
  return factor;
}

function main() {
  do {
    console.log("Enter region (1: US, 2: Japan, 3: Taiwan): ");
    let region = parseInt(prompt());
    if (region < 1 || region > 3) {
      console.log("Invalid region. Exiting.");
      break;
    }

    let factor = standard(region);

    console.log("Enter value in tons: ");
    let ton = parseFloat(prompt());

    let BTU = ton * factor[0];
    console.log(ton + " tons = " + BTU + " BTU");

    let kW = ton * factor[1];
    console.log(ton + " tons = " + kW + " kW");

  } while (true);
  return 0;
}

main();