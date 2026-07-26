class Polyline:
  def __init__(self, n):
    self.points = []
    self.num_points = n
    for i in range(n):
      self.points.append({'x': 0.0, 'y': 0.0})
  
  def get_distance(self, i, j):
    try:
      if (i < 0 or i >= self.num_points or j < 0 or j >= self
          .num_points):
        raise ValueError("Invalid index")
      if (i == j):
        return 0.0  
      dx = self.points[j]['x'] - self.points[i]['x']
      dy = self.points[j]['y'] - self.points[i]['y']
      return (dx * dx + dy * dy) ** 0.5
    except ValueError as err:
      print(err)
      return 0.0

  def get_length(self):
    if (self.num_points < 2):
      return 0.0
    else:
      totalLength = 0.0
      for i in range(1, self.num_points):
        totalLength += self.get_distance(i - 1, i)
      return totalLength

