#include <iostream>
#include <cmath>
#include "InterestCalculator.h"
#include <iomanip>
using namespace std;

int main()
{
    InterestCalculator calculator;

    double apr, loanAmount, payment, loanCost, monthlyInterest;
    int numPayments;
    string buffer;

    cout << "Enter the loan amount: ";
    cin >> loanAmount;

    while(cin.fail())
    {
        cin.clear();
        getline(cin, buffer);
        cout<<"Invalid input - please enter a number: ";
        cin>>loanAmount;
        cin.ignore();
        buffer=" ";
    }

    cout << "Enter apr rate: ";
    cin >> apr;

    while(cin.fail())
    {
        cin.clear();
        getline(cin, buffer);
        cout<<"Invalid input - please enter a percentage: ";
        cin>>apr;
        cin.ignore();
        buffer=" ";
    }

    cout << "Enter the Term (in months)";
    cin >> numPayments;

    while(cin.fail())
    {
        cin.clear();
        getline(cin, buffer);
        cout<<"Invalid input - please enter a valid number: ";
        cin>>numPayments;
        cin.ignore();
        buffer=" ";
    }

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
