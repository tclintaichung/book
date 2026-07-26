import matplotlib.pyplot as plt
import numpy as np

def quad(x):
    return 3 * x**2 - 3 * x + 1

def main():
  x = np.linspace(-10, 10, 30, dtype=float)
  y = np.array(list(map(quad, x)), dtype=float)
  plt.plot(x, y)
  plt.title("Quadratic Function Plot")
  plt.xlabel("x")
  plt.ylabel("f(x)")
  plt.grid()  
  plt.show()
  
if __name__ == "__main__":
    main()  