from datetime import datetime
    
def main():
    now = datetime.now()
    code = [0, 0, 0, 0, 0]
    code[0] = now.year % 5 + 1
    code[1] = now.month % 5 + 1
    code[2] = now.day % 5 + 1
    code[3] = now.hour % 5 + 1
    code[4] = now.minute % 5 + 1
    print("Access Code: ")
    codeStr = ''.join(map(str, code))
    print(codeStr)
    return 0

if __name__ == "__main__":
    main()