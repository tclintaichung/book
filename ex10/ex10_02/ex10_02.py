from src.polyline import Polyline

def main():
  n = int(input("Enter the number of points: "))
  if (n < 2):
    print("Number of points must be at least 2")
    return
  polyline = Polyline(n)
  for i in range(n):
      point = input(f"Enter point {i + 1} (x y): ").split(' ')
      polyline.points[i] = { 'x': float(point[0]), 'y': float(point[1]) }
  print("The points are:")
  for i in range(n):
      print(f"({polyline.points[i]['x']}, {polyline.points[i]['y']})")
  print(f"Length of the polyline: {polyline.get_length():.2f}")
if __name__ == "__main__":
  main()