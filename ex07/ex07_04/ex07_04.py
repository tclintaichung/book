file_name = "../data/ex07_03.txt"  
def main():
    pf = open(file_name, "r")
    data = []
    data = pf.read()
    pf.close()
    data = list(map(int, data.splitlines()))
    data_size = data.pop(0)
    average = sum(data) / data_size if data else 0
    print("Average:", round(average, 2))

if __name__ == "__main__":
    main()  