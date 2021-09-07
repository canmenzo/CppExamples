// validnumbers.cpp
// reads an integer and a double from the user and validates that both are within a specified range
// M. Ozmen
// 3/16/2020

#include <iostream>
using namespace std;

// declaration of function prototypes
void getNumber(int& num, const int min, const int max);
void getNumber(double& num, const double min, const double max);

int main()
{
	// variables
	int numInt = 0;
    double numDouble = 0.0;

    // range for the integer
    const int MIN_VAL1 = 1;
    const int MAX_VAL1 = 50;

    // range for the double
    const double MIN_VAL2 = 51.5;
    const double MAX_VAL2 = 100.5;

    // calls the integer function
    getNumber(numInt, MIN_VAL1, MAX_VAL1);
    // displays the validated integer
    cout << "validated integer is " << numInt << endl;

    // implementation
    cout << " " << endl;

    // calls the double function
    getNumber(numDouble, MIN_VAL2, MAX_VAL2);
    // displays the validated double
    cout << "validated double is " << numDouble << endl;

	return 0;
}

// this function prompts for integer input and validates the input and returns the main function
void getNumber(int& num, const int min, const int max)
{
    // do while loop to prompt input for user and validate the input between min and max
    do
    {
        cout << "Please enter a number between 1 and 50: ";
        cin >> num;
        if (num < min || num > max)
        	cout << "That value is out of range, please try again." << endl;
    }
    while (num < min || num > max);
}

// this function prompts for double input and validates the input and returns the main function
void getNumber(double& num, const double min, const double max)
{
    // do while loop to prompt input for user and validate the input between min and max
    do
    {
        cout << "Please enter a number between 51.5 and 100.5: ";
        cin >> num;
        if (num < min || num > max)
        	cout << "That value is out of range, please try again." << endl;
    }
    while (num < min || num > max);
}
