import numpy as np

def quad(x):
    return 3 * x**2 - 3 * x + 1

def main():
  x = np.linspace(-10, 10, 30, dtype=float)
  y = np.array(list(map(quad, x)), dtype=float)
  y_max = np.max(y)
  y_min = np.min(y)
  y_mean = np.mean(y)
  y_std = np.std(y)
  print("x:", x)
  print("y:", y)  
  print(f"y_max: {y_max}, y_min: {y_min}, y_mean: {y_mean}, y_std: {y_std}")

if __name__ == "__main__":
    main()  