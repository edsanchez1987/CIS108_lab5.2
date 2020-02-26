// CIS108_lab7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double I_rate = 0;
    double Loan_amount = 0;
    int fee = 0;
    double interest = 0;
    double total_sum = 0;

    cout << "Enter loan amount between $100 and $1000: $";
    cin >> Loan_amount;
    cout << "Enter Interest Rate between 1 and 18: ";
    cin >> I_rate;
    cout << fixed << setprecision(2);

    interest = Loan_amount * (I_rate / 100);

    if (Loan_amount >= 100 && Loan_amount <= 500) {
        fee = 20;
    }
    else if (Loan_amount > 500 && Loan_amount <= 1000) {
        fee = 25;
    }

    total_sum = interest + fee;

   // cout << fee << endl;
    if ((Loan_amount < 100 || Loan_amount >1000) || (I_rate < 1 || I_rate >18)) {
        cout << "ERROR!! Wrong amounts entered." << endl;
    }
    else {
        cout << "Requested amount of loan: " << Loan_amount << endl;
        cout << "Interest Rate: " << I_rate << "%" << endl;
        cout << "Sum of interest and Fees: $" << total_sum << endl;
    }
} 
