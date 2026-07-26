import promptSync from 'prompt-sync';
const prompt = promptSync();

let citizen =  {
  name: "",
  age: 0,
  sex: undefined,
  id: "",
}

function main() {
  citizen.name = prompt("Enter name: ");
  citizen.age = prompt("Enter age: ");
  citizen.sex = prompt("Enter sex (F/M): ");
  citizen.id = prompt("Enter ID: ");
  console.log("*********************");
  console.log("Name: " + citizen.name);
  console.log("Age: " + String(citizen.age));;
  console.log("Sex: " + citizen.sex.toUpperCase());
  console.log("ID: " + citizen.id);
  return 0;
}
main();