import { Coffee } from "./src/coffee.js";
const roast = ["light", "medium", "high", "French"];

class Latte extends Coffee {
    constructor(name, roast, price, foam) {
        super(name, roast, price);
        this.foam = foam;
    }
    getFoam() {
        return this.foam;
    }
    setFoam(foam) {
        this.foam = foam;
    }
}

function main() {
  const coffee = new Coffee("Organic Ethiopia", roast[0], 50);
  const latte = new Latte("Vanilla Latte", roast[1], 65, 2);
  console.log("-- Coffee List -- ");
  console.log("Coffee Name: " + coffee.getName());
  console.log("Coffee Roast: " + coffee.getRoast());
  console.log("Coffee Price per cup: $NT" + coffee.getPrice());
  console.log("Latte Name: " + latte.getName());
  console.log("Latte Roast: " + latte.getRoast());
  console.log("Latte Price per cup: $NT" + latte.getPrice());
  console.log("Latte Milk Foam: " + latte.getFoam() + " cm");
}
main();