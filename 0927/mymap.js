myMap = { book: 10, milk: 5 };
console.log(myMap.book); 
console.log(myMap.milk);
console.log(myMap["book"]);
console.log(myMap["milk"]);

myMap.hello = function() {
    console.log("Hello from myMap!");
};
myMap.hello();
myNewMap = new Map();
myNewMap.set("book", 10);
myNewMap.set("milk", 5);
console.log(myNewMap.get("book"));
console.log(myNewMap.get("milk"));

myNewMap.hello = function() {
    console.log("Hello from myNewMap!");
};
myNewMap.hello();