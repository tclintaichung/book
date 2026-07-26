import math
def main():
  temp = [26.5, 27.1, 21.0, 29.4, 25.5, 28.8]
  size = len(temp)
  sum_temp = sum(temp)
  average = round(sum_temp / size, 2)
  sigma = 0.0
  for i in range(size):
    sigma += math.pow(temp[i] - average, 2)

  sigma = sigma / (size - 1)
  sigma = round(math.sqrt(sigma), 2)
  print("The average of temperatures: " + str(average))
  print("The standard deviation: " + str(sigma))
  return 0

if __name__ == "__main__":
  main()