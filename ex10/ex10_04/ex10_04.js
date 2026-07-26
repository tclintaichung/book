const myObj = {
  name: "tclin",
  age: 68,
  getName: function() { return myObj.name; },
  setName: function(name) { myObj.name = name; },
  getAge: function() { return myObj.age; },
  setAge: function(age) { myObj.age = age; }   
};
function main() {
  myObj.hobbies = ["reading", "jogging", "coding"];
  myObj.hello = function () {
    return `Hello, ${myObj.name}!`;
  };
  console.log(myObj.name);
  console.log(myObj.hobbies);
  console.log(myObj.hello());
  console.log(myObj.getName());
  myObj.setAge(70);
  console.log(myObj.getAge());
  myObj.setName("John");
  console.log(myObj.getName());
}
main();