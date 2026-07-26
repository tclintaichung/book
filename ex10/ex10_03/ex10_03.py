from src.polygon import Polygon

def main():
  n = int(input("Enter the number of points: "))
  if (n < 3):
    print("Number of points must be at least 3")
    return
  polygon = Polygon(n)
  for i in range(n):
      point = input(f"Enter point {i + 1} (x y): ").split(' ')
      polygon.points[i] = { 'x': float(point[0]), 'y': float(point[1]) }
  print("The points are:")
  for i in range(n):
      print(f"({polygon.points[i]['x']}, {polygon.points[i]['y']})")
  print(f"Length of the polygon: {polygon.get_length():.2f}")
  print(f"Area of the polygon: {polygon.get_area():.2f}")
if __name__ == "__main__":
  main()