function main() {
  	let address = "1, Main Str., ";
  	const region = "West District, ";
  	const city = "Taichung";

  	address = address + region;
  	address = address + city;
  	console.log(address);
  	console.log("Length of address string: " + address.length);
  	return 0;
}

main();