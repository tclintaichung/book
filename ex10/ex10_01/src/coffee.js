export class Coffee {
    constructor(name, roast, price) {
        this.name = name;
        this.roast = roast;
        this.price = price;
    };
    getName() {
        return this.name;
    }
    getRoast() {
        return this.roast;
    }
    getPrice() {
        return this.price;
    }
    setName(name) {
        this.name = name;
    }
    setRoast(roast) {
        this.roast = roast;
    }
    setPrice(price) {
        this.price = price;
    }
}