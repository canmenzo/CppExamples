// taxcalc.cpp
// Mehmet Can Ozmen
// 1/7/20
// computes total sales tax for a $95 purchase

#include <iostream>
using namespace std;

int main() {
    double purchasePrice = 95.0;
    double stateTax = 0.06; // 6%
    double countyTax = 0.02; // 2%
    double totalTax = (stateTax + countyTax) * purchasePrice;
    double totalPrice = totalTax + purchasePrice;

    cout << "Purchase price is $" << purchasePrice << endl;
    cout << "State tax is " << (stateTax * 100) << "%" << endl;
    cout << "Country tax is " << (countyTax * 100) << "%" << endl;
    cout << "Total tax is $" << totalTax << endl;
    cout << "Total price is $" << totalPrice << endl;

    return 0;
}