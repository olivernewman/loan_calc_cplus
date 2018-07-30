#include <cmath>
#include "InterestCalculator.h"

double InterestCalculator::calculateInterestRate(double apr)
{
    return pow(1 + apr / 100, 1.0 / 12);
}

double InterestCalculator::monthlyRepayment(double LoanAmount, double MonthlyInterest, int NumPayments)
{
    return LoanAmount * pow( MonthlyInterest, NumPayments ) *
        ( MonthlyInterest - 1 ) /
        ( pow( MonthlyInterest, NumPayments ) - 1 );
}
