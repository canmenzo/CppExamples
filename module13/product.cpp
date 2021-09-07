// product.cpp
// product function using lambda expression
#include <iostream>
using namespace std;

int main()
{
        // lambda expression
        auto product = [](double a, double b, double c)  { return a * b * c; };

        double x = 5.5;
        double y = 7.3;
        double z = 9.9;

        cout << product(x, y, z) << endl;
        return 0;
}