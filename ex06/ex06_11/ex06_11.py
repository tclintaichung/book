import math

def main():
  scores = [65, 78, 90, 45, 66, 95, 100, 25, 39, 88]

  strScores = "Original scores: "
  for score in scores:
    strScores += str(score) + " "
  print(strScores)
  strScores = "Scores between 50 to 70: "
  scores_temp = list(filter(lambda score: True if score >= 50 and score <= 70 else False, scores))
  for item in scores_temp:
    strScores += str(item) + " "
  print(strScores)
  strScores = "Scores above 70: "
  scores_temp = list(filter(lambda score: True if score > 70 else False, scores))
  for item in scores_temp:
    strScores += str(item) + " "
  print(strScores)
  strScores = "Scores after adjusting: "
  scores_temp = list(map(lambda score: round(math.sqrt(score)*10), scores))
  for item in scores_temp:
    strScores += str(item) + " "
  print(strScores)
  
if __name__ == "__main__":
  main()