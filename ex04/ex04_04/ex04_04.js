import promptSync from 'prompt-sync';
const prompt = promptSync();

const discount = [0.0, 0.05, 0.1, 0.15, 0.2, 0.25];
const discPrice = [100, 300, 500, 1000, 2000];

function main() {
    let i = 0;
    let price = 0;
    price = parseInt(prompt("Enter the price of the item: "));
    if (price < 0) {
        console.log("Invalid price. Exiting.");
        return 1;
    }
    switch(price) {
        case ((price < discPrice[0]) ? price : -1):
            console.log("Final price: NT$" + (1.0 - discount[0] )* price);
            break;
        case ((price >= discPrice[0]) && (price < discPrice[1])  ? price : -1):
            console.log("Final price: NT$" + (1.0 - discount[1] )* price);
            break;
        case ((price >= discPrice[1]) && (price < discPrice[2])  ? price : -1):
            console.log("Final price: NT$" + (1.0 - discount[2] )* price);
            break;
        case ((price >= discPrice[2]) && (price < discPrice[3])  ? price : -1):
            console.log("Final price: NT$" + (1.0 - discount[3] )* price);
            break;
        case ((price >= discPrice[3]) && (price < discPrice[4])  ? price : -1):
            console.log("Final price: NT$" + (1.0 - discount[4] )* price);
            break;
        case (price >= discPrice[4]) ? price : -1:
            console.log("Final price: NT$" + (1.0 - discount[5] )* price);
            break;
        default:
            console.log("Final price: NT$" + price)
    }
    return 0;
}
main();