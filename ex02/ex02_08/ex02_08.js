let shoppingList = [
  ["shampoo", 2, false],
  ["kitchen towel", 1, false],
  ["detergent", 2, false],
  ["cheese", 3, false],
  ["apple", 6, false]
];

function main() {
  const item = ["banana", 6, false];
  shoppingList.push(item);
  shoppingList.at(1)[1] = 6;
  shoppingList.at(3)[2] = true;
  const len = shoppingList.length;
  console.log("Length of shopping list: " + len);
  console.log(shoppingList.at(1)[0] + ": " + 
              shoppingList.at(1)[1] + "/" + 
              shoppingList.at(1)[2]);
  console.log(shoppingList.at(3)[0] + ": " + 
              shoppingList.at(3)[1] + "/" + 
              shoppingList.at(3)[2]);
  return 0;
}
main();