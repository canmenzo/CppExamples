// Mehmet Can Ozmen
// 15 January 2020
// numberGen.cpp
// This program prompts for a numeric range and generates a random number within that range.

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // variable
    string firstName;
    string lastName;
    int lowRange;
    int highRange;
    int randomNumber;
    float percentValue;
    float randomPercent;
    unsigned seed = 0;

    // prompt for name and display
    cout << "Please enter your first name and middle initial: ";
    getline(cin, firstName);
    cout << "Please enter your last name: ";
    getline(cin, lastName);
    cout << "Hello, " << (  firstName + " " + lastName) << "!" << endl;

    // header
    cout << "" << endl;
    cout << "This program prompts for a numeric range and " << endl;
    cout << "generates a random number within that range." << endl;
    cout << "" << endl;

    // obtain range for the seed
    cout << "Please enter the low end of the range: ";
    cin >> lowRange;
    cout << "Please enter the high end of the range: ";
    cin >> highRange;

    //formula
    seed  = time(0); // seed the generator
    srand(seed);
    randomNumber = rand() % (highRange + 1 - lowRange) + lowRange;
    cout << "Your random number is " << fixed << randomNumber << endl;

    // prompt for percentage
    cout << "" << endl;
    cout << "Please enter a percentage value (fractional values are allowed): ";
    cin >> percentValue;
    randomPercent = (randomNumber * percentValue) / 100;
    cout << setprecision(1) << static_cast<double>(percentValue) << "% of your random number is " << fixed << setprecision(4) << randomPercent;


    return 0;
}
