import numpy as np

def main():
    A = np.array([[5, 4], [3, 2]])
    b = np.array([1, 2])
    x = np.linalg.solve(A, b)
    print("Solution:", x)

if __name__ == "__main__":
    main()