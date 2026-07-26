def less_digits(num):
  m = str(num)
  i = m.find(".")
  return m[:i + 4]

def line_eq(p1, p2):
    if p1["x"] == p2["x"]:
        print(f"Line equation: x = {p1['x']}")
        return
    if p1["y"] == p2["y"]:
        print(f"Line equation: y = {p1['y']}")
        return
    m = (p2["y"] - p1["y"]) / (p2["x"] - p1["x"])
    b = p1["y"] - m * p1["x"]   
    m1 = less_digits(m)
    b1 = less_digits(b)
    if b < 0:
        print(f"Line equation: y = {m1}x - {b1[1:]}")
    elif b == 0:
        print(f"Line equation: y = {m1}x")
    else:
        print(f"Line equation: y = {m1}x + {b1}")

def main():
  p1 = {"x": 0, "y": 0}
  p2 = {"x": 0, "y": 0}
  try:
    while True:
      print("Enter point 1 x: ")
      p1["x"] = int(input())
      print("Enter point 1 y: ")
      p1["y"] = int(input())
      print("Enter point 2 x: ")
      p2["x"] = int(input())
      print("Enter point 2 y: ")
      p2["y"] = int(input())
      line_eq(p1, p2)
      print("Continue?y/n: ")
      ch = input()
      if ch != 'y':
        break
  except Exception as error:
    print(f"Error: {error}")

if __name__ == "__main__":
   main()