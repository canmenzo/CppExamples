// areamenu.cpp
// calculates various shape areas
// D. Singletary
// 6/1/2016

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // numeric constants
    const double PI = 3.14159;
    const double ONE_HALF = 0.5;

    // string constants for menu
    const string STR_TRIANGLE = "triangle";
    const string STR_RECTANGLE = "rectangle";
    const string STR_CIRCLE = "circle";
    const string STR_EXIT = "exit";
    const string STR_ENTERCHOICE = "Please enter your choice ==> ";

    // local variables for calculations and menu
    int base = 0, height = 0, width = 0, length = 0, radius = 0;
    string menu_choice = "";

    cout << "Welcome to the Area Calculator" << endl;
    cout << "------------------------------" << endl;
    cout << "Please enter your choice from the shapes shown below." << endl << endl;
    cout << STR_TRIANGLE << endl;
    cout << STR_RECTANGLE << endl;
    cout << STR_CIRCLE << endl;
    cout << STR_EXIT << endl;
    cout << endl << STR_ENTERCHOICE;

    cin >> menu_choice;
    cout << "Your choice is \"" << menu_choice << "\"" << endl;

    // validate menu choice:
    //     if valid shape, read and validate parameters and calculate area
    //     else if exit, wave goodbye
    //     else if not exiting, display error for invalid choice
    //     else exiting: wave goodbye
    if (menu_choice == STR_TRIANGLE)
   {
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;

            if (base <= 0 || height <= 0)
                cout << "Invalid dimension; base and height should be > 0" << endl;
            else
                cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<double>(ONE_HALF * base * height);
    }
    else if (menu_choice == STR_RECTANGLE)
    {
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            if (length <= 0 || width <= 0)
                cout << "Invalid dimension; length and width should be > 0" << endl;
            else
                cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<double>(length * width);
    }
    else if (menu_choice == STR_CIRCLE)
    {
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius <= 0)
                cout << "Invalid dimension; radius should be > 0" << endl;
            else
                cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<double>(PI * radius * radius);
    }
    else if (menu_choice != STR_EXIT)
        cout << "Invalid Choice: \"" << menu_choice << "\"" << endl;
    else
        cout << "Goodbye!" << endl;

    return 0;
}
