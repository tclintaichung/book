def main():
    file_name = "../data/ex07_01.txt"
    pf = open(file_name, 'r')
    content = pf.read()
    print(content)
    pf.close()
    return 0    
if __name__ == "__main__":
    main()  