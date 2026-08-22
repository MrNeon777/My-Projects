#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Principal;
    double IntRate;
    double PayPerYear;
    double NumYears;
    double Payment;
    double numer, denom;
    double b, e;

    cout << "Enter the initial loan amount: ";
    cin >> Principal;

    cout << "Enter the interest rate for the loan:";
    cin >> IntRate;

    cout << "Enter the number of payments per year: ";
    cin >> PayPerYear;

    cout << "Enter the number of years for which the loan is issued: ";
    cin >> NumYears;

    b = (IntRate / PayPerYear) + 1;
    e = -PayPerYear * NumYears;
    denom = 1 - pow(b, e);

    numer = IntRate * (Principal / PayPerYear);
    Payment = numer / denom;

    cout << "The payment will be: " << Payment;

    return 0;
}