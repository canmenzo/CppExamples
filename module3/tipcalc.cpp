// tipcalc.cpp
// Mehmet Can Ozmen
// 1/8/20
// computes tax and tip on a restaurant bill for a $50 meal

#include <iostream>
using namespace std;

int main() {
	double mealCharge = 50.0;  // total cost of the meal
	double taxRate = 0.06;  // 6% percent of taxes
	double tipPercent = 0.2;  // 20% percent of tip
	
	// calculates the bill for meal cost and it's tax
	double totalBeforeTip =  mealCharge + (mealCharge * taxRate); 
	// calculates the total bill w/ tip
	double totalAfterTip = totalBeforeTip + (totalBeforeTip * tipPercent); 

	// displays the output for charges and prices
	cout << "Meal charge is $" << mealCharge << endl;
	cout << "Tax rate is " << (taxRate * 100) << "%" << endl;
	cout << "Tip percentage is " << (tipPercent * 100) << "%" << endl;
	cout << "Total before tip is $" << totalBeforeTip << endl;
	cout << "Total with tip is $" << totalAfterTip << endl;

	return 0;
}
