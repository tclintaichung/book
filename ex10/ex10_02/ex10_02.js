import promptSync from 'prompt-sync';
const prompt = promptSync();
import { Polyline } from './src/polyline.js';

function main() {
  let n = parseInt(prompt("Enter the number of points: "));
  if (isNaN(n) || n < 2) {
    console.error("Invalid number of points. Must be an integer greater than or equal to 2.");
    return;
  }
  try { 
    let polyline = new Polyline(n);
    for (let i = 0; i < n; ++i) {
      let point = prompt(`Enter point ${i + 1} (x y): `).split(' ');
      polyline.points.push({ x: parseFloat(point[0]), y: parseFloat(point[1]) });
    }
    console.log("The points are:");
    for (let i = 0; i < n; ++i) {
      console.log(`(${polyline.points[i].x}, ${polyline.points[i].y})`);
    }
    console.log(`Length of the polyline: ${polyline.getLength().toFixed(2)}`);
  } catch (error) {
    console.error(error.message);
  }
}

main();