import promptSync from 'prompt-sync';
const prompt = promptSync();

const discount = [0.0, 0.05, 0.1, 0.15, 0.2, 0.25];
const discountPrice = [99.0, 299.0, 499.0, 999.0, 1999.0];

function main() {
    let price = 0.0;
    price = prompt("Enter the price of the item: ");
    if (price < 0) {
        console.log("Invalid price. Exiting.");
        return 1;
    } 
    if (price <= discountPrice[0]) {
      let finalPrice = (1.0 - discount[0]) * price;
      let str = `Final price: NT$${finalPrice}`;
      console.log(str);
      console.log(`Final price: NT$${(1.0 - discount[0])*price}`);
    }
    else if (price <= discountPrice[1]) {
      console.log(`Final price: NT$${(1.0 - discount[1])*price}`);
    }
    else if (price <= discountPrice[2]) {
      console.log(`Final price: NT$${(1.0 - discount[2])*price}`);  
    }
    else if (price <= discountPrice[3]) {
      console.log(`Final price: NT$${(1.0 - discount[3])*price}`);    
    }
    else if (price <= discountPrice[4]) {
      console.log(`Final price: NT$${(1.0 - discount[4])*price}`);      
    }
    else {
      console.log(`Final price: NT$${(1.0 - discount[5])*price}`);     
    } 
  return 0;
}
main();