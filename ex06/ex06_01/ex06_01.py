SCORE_GRID = [
    0.0, 6.17, 12.33, 18.50, 
    24.67, 30.84, 37.00, 43.17, 
    49.34, 55.51, 61.67, 67.84, 
    74.01, 80.18, 86.34, 100.00
]
def get_rank(score):
  rank_value = -1
  for i, val in enumerate(SCORE_GRID):
    if score <= val:
      rank_value = i
      break
  return rank_value 

def main():
  rank_value = -1
  while True:
    score = float(input("Enter your score: "))
    if score < 0 or score > 100:
      print("Invalid score. Exiting.")
      break   
    rank_value = get_rank(score)
    if rank_value != -1:
      print("Your rank is: " + str(rank_value))
    else:
      print("Error determining rank.")

if __name__ == "__main__":
  main()