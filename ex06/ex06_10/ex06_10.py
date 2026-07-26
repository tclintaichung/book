# import copy

def add(arr):
  arr[0] += arr[1] 

def multiply(arr):
  arr[0] *= arr[1]

def main():
  a = []
  b = []
  a.append(float(input(" a = ")))
  a.append(float(input(" b = "))) 
  b = a.copy()
  str_result = str(a[0]) + " + " + str(a[1]) + " = "
  add(a)
  str_result += str(a[0])
  print(str_result)
  str_result = str(b[0]) + " * " + str(b[1]) + " = "
  multiply(b)
  str_result += str(b[0])
  print(str_result)
  return 0

if __name__ == "__main__":
  main()