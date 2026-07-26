#include <iostream>
using namespace std;

int main() {
  const double LOAN = 5400000;
  const double INTEREST_RATE = 0.812 / 100 /12;
  const int LOAN_TERM = 36; 
  const double INSTALMENT = LOAN / LOAN_TERM;
  double loan = LOAN; 
  double principal_plus_interest = 0.0;
  double interest = 0.0;
  double payment = 0.0;

  for (int i = 0; i < LOAN_TERM; i++) {
    interest = loan * INTEREST_RATE;
    payment = INSTALMENT + interest;
    loan -= INSTALMENT;
    principal_plus_interest += payment;
    cout << i << ": " << payment << " / " << interest << endl;
  }
  cout << "Principal plus interest: " << principal_plus_interest << endl;
  cout << "Total interest: " << principal_plus_interest - LOAN << endl;
  return 0;
}