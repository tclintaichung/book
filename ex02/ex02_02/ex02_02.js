function main() {
  const address = "1, Main Str., ";
  const region = "West District, ";
  const city = "Taichung";

  const index1 = 3, index2 = 5, index3 = 7;

  console.log("The (" + String(index1+1) + ")-th character of \"" 
            + address + "\": " + address[index1]);
  console.log("The (" + String(index2+1) + ")-th character of \"" 
            + region + "\": " + region[index2]);
  console.log("The (" + String(index3+1) + ")-th character of \"" 
            + city + "\": " + city[index3]);
  return 0;
}

main();