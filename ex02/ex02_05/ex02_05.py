def main():
	  cmd = input("Enter string: ")
	  print("First character is alphabetic: " + str(cmd[0].isalpha()))
	  new_cmd = cmd[0].upper()
	  new_cmd += cmd[1:len(cmd)]
	  print(new_cmd)
	  return 0

if __name__ == "__main__":
  	main()