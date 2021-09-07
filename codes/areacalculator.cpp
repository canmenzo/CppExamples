// areacalculator.cpp
// calculates various shape areas
// M. Ozmen
// 2/1/2020

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
    const string STR_DOT = ".";

    // integer constants for menu choice
    const int MENU_TRIANGLE = 1;
    const int MENU_RECTANGLE = 2;
    const int MENU_CIRCLE = 3;
    const int MENU_EXIT = 0;
    int menu_choice;

    // local variables for shapes
    int base = 0;
    int height = 0;
    int width = 0;
    int length = 0;
    int radius = 0;

    cout << "Welcome to the Area Calculator" << endl;
    cout << "------------------------------" << endl;
    cout << "Please enter your choice from the shapes shown below." << endl << endl;
    cout << MENU_TRIANGLE << STR_DOT << STR_TRIANGLE << endl;
    cout << MENU_RECTANGLE << STR_DOT << STR_RECTANGLE << endl;
    cout << MENU_CIRCLE << STR_DOT << STR_CIRCLE << endl;
    cout << MENU_EXIT << STR_DOT << STR_EXIT << endl;
    cout << endl << STR_ENTERCHOICE;
    cin >> menu_choice;

        // prompt user for input about shapes, validate them and calculate area and display
        switch (menu_choice)
        {
            case MENU_TRIANGLE:
                cout << "Your choice is \"" << STR_TRIANGLE << "\"" << endl;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (base <= 0 || height <= 0)
                    cout << "Invalid dimension; base and height should be > 0" << endl;
                else
                    cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<float>(ONE_HALF * base * height);
                break;

            case MENU_RECTANGLE:
                cout << "Your choice is \"" << STR_RECTANGLE << "\"" << endl;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (length <= 0 || width <= 0)
                    cout << "Invalid dimension; length and width should be > 0" << endl;
                else
                    cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<float>(length * width);
                break;

            case MENU_CIRCLE:
                cout << "Your choice is \"" << STR_CIRCLE << "\"" << endl;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius <= 0)
                    cout << "Invalid dimension; radius should be > 0" << endl;
                else
                    cout << fixed << setprecision(2) << "Area = " <<
                        static_cast<float>(PI * radius * radius);
                break;

            case MENU_EXIT:
                cout << "Your choice is \"" << STR_EXIT << "\"" << endl;
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Your choice is \"" << menu_choice << "\"" << endl;
                cout << "Invalid Choice: \"" << menu_choice << "\"" << endl;
                cout << "Goodbye!" << endl;
                break;
        }
    return 0;
}
