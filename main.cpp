#include <iostream>
#include <cmath>
#include "InterestCalculator.h"

using namespace std;

int main()
{
    InterestCalculator calculator;

    double apr, loanAmount, payment, loanCost, monthlyInterest;
    int numPayments;

    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    cout << "Enter apr rate: ";
    cin >> apr;

    cout << "Enter the Term (in months)";
    cin >> numPayments;

    cout << "Loan amount: £" << loanAmount << endl;
    cout << "Yearly Interest Rate: " << apr << "%" << endl;
    cout << "Number of Monthly Payments: " << numPayments << endl;

    monthlyInterest = calculator.calculateInterestRate(apr);
    payment = calculator.monthlyRepayment(loanAmount, monthlyInterest, numPayments);

    cout << "Monthly Payment: £" << roundf(payment * 100) / 100 << endl;

    loanCost = payment * numPayments;

    cout << "Total Cost of Loan: £" << roundf(loanCost * 100) / 100 << endl;

    cout << "Interest Paid: £" << (loanCost - loanAmount) << endl;

    return 0;
}
