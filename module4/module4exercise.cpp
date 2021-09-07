// areatable.cpp
// displays a table of areas for various radius values
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    const int MINRADIUS = 1;
    const int MAXRADIUS = 10;
    const string FILENAME = "areas.txt";
    int maxRadius = 0; // seed for input/validation

    cout << "This program will calculate areas of circles up to a given radius" << endl;
    // get input and validate
    while (maxRadius < MINRADIUS || maxRadius > MAXRADIUS)
    {
        cout << "Please enter a radius value between ";
        cout << MINRADIUS << " and " << MAXRADIUS << " for the areas: ";
        cin >> maxRadius;
        if (maxRadius < MINRADIUS || maxRadius > MAXRADIUS)
            cout << maxRadius << " is out of range." << endl;
    }

    // open the output file
    ofstream outputFile;
    outputFile.open(FILENAME);
    if (outputFile)
    {
        const string HEADER = "Radius Area";

        // calculate the areas
        cout << endl << HEADER << endl;
        outputFile << HEADER << endl;
        for (int radius = 1; radius <= maxRadius; radius++)
        {
            cout << left << setw(6) << radius << " " << PI * radius * radius << endl;
            outputFile << left << setw(6) << radius << " " << PI * radius * radius << endl;
        }
        outputFile.close();
        cout << FILENAME << "file written!" << endl;
    }
    else
        cout << "Error: could not open output file!" << endl;

    return 0;
}
