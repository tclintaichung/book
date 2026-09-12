myMap = { book: 10, milk: 5 };
console.log(myMap.book); 
console.log(myMap.milk);
console.log(myMap["book"]);
console.log(myMap["milk"]);

myMap.hello = function() {
    console.log("Hello from myMap!");
};
myMap.hello();