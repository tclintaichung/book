export class Polyline {
  constructor(n) {
    this.points = [];
    this.numPoints = n;
  }
  getDistance(i, j) {
    if (i < 0 || i >= this.numPoints || j < 0 || j >= this.numPoints) {
      throw new Error("Invalid index");
    }
    let dx = this.points[j].x - this.points[i].x;
    let dy = this.points[j].y - this.points[i].y;
    return Math.sqrt(dx * dx + dy * dy);
  }
  getLength() {
    if (this.numPoints < 2) {
      return 0.0;
    } else {
      let totalLength = 0.0;
      for (let i = 1; i < this.numPoints; ++i) {
        totalLength += this.getDistance(i - 1, i);
      }
      return totalLength;
    }
  }
}
