def main():
  my_scores = dict({
    '1': 6.17, '2': 12.33, '3': 18.50,
    '4': 24.67, '5': 30.84, '6': 37.00, '7': 43.17,
    '8': 49.34, '9': 55.51, '10': 61.67, '11': 67.84,
    '12': 74.01, '13': 80.18, '14': 86.34, '15': 100.0})

  while True:
    score = float(input("Enter your score: "))
    if (score < 0):
      break
    if (score <= 0):
      print("Your score is in Level 0")
      continue
    for key, value in my_scores.items():
      if (score <= value):
        print(f"Your score is in Level {key}")
        break
  return 0

if __name__ == "__main__":
  main()