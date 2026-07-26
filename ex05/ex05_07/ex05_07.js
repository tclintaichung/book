function main() {
  const LOAN = 5400000;
  const INTEREST_RATE = 0.812 / 100 /12;
  const LOAN_TERM = 36; 
  const INSTALMENT = LOAN / LOAN_TERM;
  let loan = LOAN;
  let principalPlusInterest = 0.0;
  let interest = 0.0;
  let payment = 0.0;

  for (let i = 0; i < LOAN_TERM; i++) {
    interest = loan * INTEREST_RATE;
    payment = INSTALMENT + interest;
    loan -= INSTALMENT;
    principalPlusInterest += payment;
    console.log(String(i) + ": " + String(payment.toFixed(2)) + " / " + String(interest.toFixed(2)));
  }
  console.log("Principal plus interest: " + String(principalPlusInterest.toFixed(2)));
  console.log("Total interest: " + String((principalPlusInterest - LOAN).toFixed(2)));
  return 0;
}
main();