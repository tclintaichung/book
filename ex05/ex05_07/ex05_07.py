def main():
  LOAN = 5400000
  INTEREST_RATE = 0.812 / 100 /12
  LOAN_TERM = 36 
  INSTALMENT = LOAN / LOAN_TERM
  loan = LOAN
  principal_plus_interest = 0.0
  interest = 0.0
  payment = 0.0

  for i in range(LOAN_TERM):
    interest = loan * INTEREST_RATE
    payment = INSTALMENT + interest
    loan -= INSTALMENT
    principal_plus_interest += payment
    print(str(i) + ": " + str(round(payment, 2)) + " / " + str(round(interest, 2)))
  
  print("Principal plus interest: " + str(round(principal_plus_interest)))
  print("Total interest: " + str((round(principal_plus_interest - LOAN, 2))))
  return 0

if __name__ == "__main__":
  main()