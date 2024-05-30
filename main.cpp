#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, payRate, grossPay, fedTax, stateTax, fica, net;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter pay rate: ";
    cin >> payRate;

    grossPay = hours * payRate;

    fedTax = grossPay * 0.15;
    stateTax = grossPay * 0.05;
    fica = grossPay * 0.0765;

    net = grossPay - fedTax - stateTax - fica;

    cout << fixed << showpoint << setprecision(2);

    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Federal Tax: $" << fedTax << endl;
    cout << "State Tax: $" << stateTax << endl;
    cout << "FICA: $" << fica << endl;
    cout << "Net Pay: $" << net << endl;

    return 0;
}