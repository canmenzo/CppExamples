#include <iostream>
using namespace std;

int main() {

     enum PrimaryColor { red = 1, yellow = 3, blue = 5, green = 7 };



    PrimaryColor myColor = red;

    myColor = static_cast<PrimaryColor>(blue - 2);



    switch (myColor)

    {

        case red:    cout << "myColor is red" << endl;       break;

        case yellow: cout << "myColor is yellow" << endl;    break;

        case blue:   cout << "myColor is blue" << endl;      break;

        case green:  cout << "myColor is green" << endl;     break;

        default:     cout << "unrecognizable color" << endl; break;

    }

    return 0;
}
