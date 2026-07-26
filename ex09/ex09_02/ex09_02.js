function main() {
  const persons = new Map([
    ["Chang", 45],
    ["Chen", 36],
    ["Yu", 39],
    ["Wang", 25]
  ]);
    
  let it = persons.entries();
  for (let item of it) {
    console.log(item[1]);
  }
  return 0;
}
main();