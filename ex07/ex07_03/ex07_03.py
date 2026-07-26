import random
def main():
    file_name = "../data/ex07_03.txt"
    upper = 100
    lower = 60
    data = []
    data_size = int(input("Enter data size: "))
    if data_size <= 0:
        print("Invalid data size")
        return 1
    for i in range(data_size):
        data.append(random.randint(lower, upper))
    data.insert(0, data_size)
    lines = '\n'.join(map(str, data))
    fp = open(file_name, "w")
    fp.write(lines)
    fp.close()
    return 0    

if __name__ == "__main__":
    main()