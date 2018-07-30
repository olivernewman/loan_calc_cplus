#ifndef LOANCALCULATOR_INTERESTCALCULATOR_H
#define LOANCALCULATOR_INTERESTCALCULATOR_H

class InterestCalculator{
public:
    double calculateInterestRate(double apr);
    double monthlyRepayment(double LoanAmount, double MonthlyInterest, int NumPayments);
};
#endif //LOANCALCULATOR_INTERESTCALCULATOR_H
