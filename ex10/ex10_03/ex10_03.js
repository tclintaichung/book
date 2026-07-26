import promptSync from 'prompt-sync';
const prompt = promptSync();
import { Polygon } from './src/polygon.js';

function main() {
  let n = parseInt(prompt("Enter the number of points: "));
  if (isNaN(n) || n < 3) {
    console.error("Invalid number of points. Must be an integer greater than or equal to 3.");
    return;
  }
  try { 
    let polygon = new Polygon(n);
    for (let i = 0; i < n; ++i) {
      let point = prompt(`Enter point ${i + 1} (x y): `).split(' ');
      polygon.points.push({ x: parseFloat(point[0]), y: parseFloat(point[1]) });
    }
    console.log("The points are:");
    for (let i = 0; i < n; ++i) {
      console.log(`(${polygon.points[i].x}, ${polygon.points[i].y})`);
    }
    console.log(`Length of the polygon: ${polygon.getLength().toFixed(2)}`);
    console.log(`Area of the polygon: ${polygon.getArea().toFixed(2)}`);  
  } catch (error) {
    console.error(error.message);
  }
}
main();