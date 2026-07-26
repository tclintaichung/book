import queue

def main():
  post_office_queue = queue.Queue()
  post_office_queue.put(303)
  post_office_queue.put(304)
  post_office_queue.put(305)
  post_office_queue.put(306)
  post_office_queue.put(307)
  while not post_office_queue.empty():
    print(str(post_office_queue.get()) + " is being served")
    print("Number in line is now: " + str(post_office_queue.qsize()))
  return 0

if __name__ == "__main__":
  main()