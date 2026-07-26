#include <stdio.h>

int main() {
  const double LOAN = 5400000;
  const double INTEREST_RATE = 0.812 / 100 /12;
  const int LOAN_TERM = 36; 
  const double INSTALMENT = LOAN / LOAN_TERM;
  double loan = LOAN;
  double total_payment = 0.0;
  double interest = 0.0;
  double payment = 0.0;

  for (int i = 0; i < LOAN_TERM; i++) {
    interest = loan * INTEREST_RATE;
    payment = INSTALMENT + interest;
    loan -= INSTALMENT;
    total_payment += payment;
    printf("%2d: %.2f /%8.2f\n", i, payment, interest);
  }
  printf("Principal plus interest: %.2f\n", total_payment);
  printf("Total interest: %.2f\n", total_payment - LOAN);
  return 0;
}