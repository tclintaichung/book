import time

def main():
    count_down_time = int(input("Enter count down time in seconds: "))
    for i in range(count_down_time, 0, -1):
        print(f"Time remaining (s): {i}")
        time.sleep(1)
    print("Time's up!")

if __name__ == "__main__":
    main()