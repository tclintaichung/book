import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  const colorArray = new Array();
  const colors = ["red", "green", "blue", "yellow", "cyan"];
  const rgbs = [[255, 0, 0], [0, 255, 0], [0, 0, 255], [255, 255, 0], [0, 255, 255]];

  let color = 0x000000;

  for (let i of rgbs) {
    color = rgbToUint32(i);
    colorArray.push({color: colors[rgbs.indexOf(i)], code: color});
    console.log("Color: " + colors[rgbs.indexOf(i)] + ", Code: 0x" + color.toString(16));
  }
  console.log("--------------------------------");
  let searchColor = "";
  searchColor = prompt("Enter color name to search: ");
  if (searchColor === "") {
    console.log("No color name provided.");
    return;
  }
  const found = colorArray.find(item => item.color === searchColor.trim());
  if (found) {
    console.log("Found color in color array: " + found.color);
    color = found.code;
    let rgb = new Uint8Array(3);
    uint32ToRGB(rgb, color);
    console.log("Value: R(" + rgb[0] + "), G(" + rgb[1] + "), B(" + rgb[2] + ")");
  }
  else {
    console.log("Color not found");
  }
  return 0;
}

function rgbToUint32(rgb) {
  let color = (rgb[0] << 16) | (rgb[1] << 8) | rgb[2];
  return color;
}

function uint32ToRGB(rgb, color) {
  rgb[0] = (color >> 16) & 0xFF;
  rgb[1] = (color >> 8) & 0xFF;
  rgb[2] = color & 0xFF;
}
main();