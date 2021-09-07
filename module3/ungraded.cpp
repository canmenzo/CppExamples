// Mehmet Can Ozmen
// 1/14/20
// ungraded.cpp
// prompts user for input on name, date, temp. converts and displays.

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){

    // constant
    const double F_RATIO = 9.0/5.0;
    const double F_BASE = 32.0;

    // variable
    string firstName;
    string currentDate;
    double inputTemp;
    double fahrenTemp;

    unsigned seed = 0;

    seed  = time(0); // seed the generator
    srand(seed);


    // prompt for name
    cout << "Please enter your first name: ";
    cin >> firstName;
    cin.ignore();
    cout << "Hello, " << firstName << "!" << endl;

    // prompt for date
    cout << "Please enter the current date in the format \"Month Day, Year\": ";
    cin >> currentDate;
    getline(cin, currentDate);

    // prompt for temp
    cout << "Please enter a celsius temperature value: ";
    cin >> inputTemp;

    // convert celsius to fahrenheit
    fahrenTemp = F_RATIO * inputTemp + F_BASE;

    // display current date, temp in fahrenheit and random temp
    cout << "Today is " << currentDate << endl;
    cout << "The current temperature is " << fixed << setprecision(2) << fahrenTemp << " degrees Fahrenheit." << endl;

    inputTemp = (rand() % 100 +1);
    cout << "Today's random temperature is " << static_cast<int>(inputTemp) << " degrees Celsius." << endl;




    return 0;
}
