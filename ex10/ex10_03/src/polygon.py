from src.polyline import Polyline

class Polygon(Polyline):
  def __init__(self, n):
    super().__init__(n)
  def get_length(self):
    total_length = super().get_length()
    total_length += super().get_distance(self.num_points - 1, 0)
    return total_length
  def get_area(self):
    area = 0.0
    n = self.num_points
    if (n < 3): return 0.0
    for i in range(n):
      if (i+1 == n) :
        area += self.points[i]['x'] * self.points[0]['y'] - self.points[0]['x'] * self.points[i]['y']
      else:
        area += self.points[i]['x'] * self.points[i+1]['y'] - self.points[i+1]['x'] * self.points[i]['y']
    return abs(area) / 2.0