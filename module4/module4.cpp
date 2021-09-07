// sums.cpp
// M. Ozmen
// 1/26/2020
// Sums even and odd values up to a target

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int target = 0;
    int sum = 0;
    int i = 0;
    const string FILENAME = "sums.txt";

    // get input and validate
    while (target <= 0)
    {
        cout << "Please enter a positive integer greater than 0: ";
        cin >> target;
        if (target <= 0)
            cout << target << " is out of range." << endl;
    }

    ofstream outputFile;
    outputFile.open(FILENAME);

    if (outputFile)
    {
        // loop to calculate the sum of the evens
        for (i = 2; i <= target; i += 2)
            sum += i;
        cout << "The sum of the even numbers up to " << target << " is " << sum << endl;
       outputFile << "The sum of the even numbers up to " << target << " is " << sum << endl;

        // loop to calculate the sum of the odds
        sum = 0; // reset

        for (i = 1; i <= target; i += 2)
            sum += i;

        cout << "The sum of the odd numbers up to " << target << " is " << sum << endl;
        outputFile << "The sum of the odd numbers up to " << target << " is " << sum << endl;
        outputFile.close();
        cout << FILENAME << " file written!" << endl;
    }
    else
        cout << "Error: could not open output file!" << endl;

    return 0;
}

 