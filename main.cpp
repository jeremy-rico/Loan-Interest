#include <iostream>

using namespace std;

int main()
{
    cout << "Loan v2.0";
    
    float loanTot, newTot, loanLength, annualInterest, dailyInterest;
    cout << "Please input the following information:" << endl;
    cout << "Total loan amount: ";
    cin  >> loanTot;

    cout << "Estimated length of loan (days): ";
    cin  >> loanLength;

    cout << "Annual interest rate (percentage): ";
    cin  >> annualInterest;
    cout << endl;

    dailyInterest = annualInterest  / 36500;
    newTot = loanTot;

    for (int i = 0; i <= loanLength; i++){
        newTot = newTot + (newTot * dailyInterest);
    }

    float interest = newTot - loanTot;

    cout << "Final amount owed: $" << newTot;
    cout << endl;

    cout << "Total amount of interest: $" << interest;
    cout << endl;

    return 0;
}
