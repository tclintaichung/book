def print_nums():
  function_num = 200
  print("Integer in global: " + str(global_num))
  print("Integer in function: " + str(function_num))

def main():
  global global_num
  global_num = 100
  print("Initial Integer in global: " + str(global_num))
  global_num = 101
  print_nums()
  if True:
    block_num = 300
    print("Integer in block: " + str(block_num))
  print("Integer outside of block: " + str(block_num))
  # print(function_num)
  return 0

if __name__ == "__main__":
  main()