function main() {
  const persons = new Map([
    ["Chang", 45],
    ["Chen", 36],
    ["Yu", 39],
    ["Wang", 25]]);

  console.log(persons.get("Chang"));
  console.log(persons.get("Chen"));
  console.log(persons.get("Yu"));
  console.log(persons.get("Wang"));
  return 0;
}
main();