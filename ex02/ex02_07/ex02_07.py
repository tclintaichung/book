import random
import math

matrix = [
  "chinese12345",
  "english12345",
  "mathematics1",
  "history12345",
  "physics12345"
]

def main():
  size = len(matrix[0])
  items = [matrix[0][math.floor(random.random() * size)], 
           matrix[1][math.floor(random.random() * size)],
           matrix[2][math.floor(random.random() * size)],
           matrix[3][math.floor(random.random() * size)],
           matrix[4][math.floor(random.random() * size)]
  ] 
  password = ''.join(items)
  print("The Password: " + password)

if __name__ == "__main__":
  main()