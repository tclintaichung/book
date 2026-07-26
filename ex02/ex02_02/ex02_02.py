def main():
  address = "1, Main Str., "
  region = "West District, "
  city = "Taichung"

  index1 = 3
  index2 = 5
  index3 = 7

  print("The (" + str(index1+1) + ")-th character of \"" 
            + address + "\": " + address[index1])
  print("The (" + str(index2+1) + ")-th character of \"" 
            + region + "\": " + region[index2])
  print("The (" + str(index3+1) + ")-th character of \"" 
            + city + "\": " + city[index3])
  return 0

if __name__ == "__main__":
  main()