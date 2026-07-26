import { Polyline } from './polyline.js';

export class Polygon extends Polyline {
  constructor(n) {
    super(n);
  }
  getLength() {
    let totalLength = 0.0;
    totalLength = super.getLength();
    return totalLength + super.getDistance(this.numPoints - 1, 0);
  }
  getArea() {
    let area = 0.0;
    let n = this.numPoints;
    if (n < 3) return 0.0; 
    for (let i = 0; i < n; ++i) {
      if (i+1 == n) {
        area += this.points[i].x * this.points[0].y - this.points[0].x * this.points[i].y;
      } else {
        area += this.points[i].x * this.points[i+1].y - this.points[i+1].x * this.points[i].y;
      }
    }
    return Math.abs(area) / 2.0;
  }
}