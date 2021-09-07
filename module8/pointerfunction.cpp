
// pointerfunction.cpp
// pass an array to a function

#include <iostream>
#include <iomanip>
using namespace std;

void showArray(double* array, int size);
void showArrayReverse(double* array, int size);

int main()
{
    const int SIZE = 4;

    double doubleArray[SIZE];
    double *pDouble = nullptr;
    int i = 0;

    for (i = 0, pDouble = doubleArray; i < SIZE; i++)
    {
        cout << "Please enter a value: ";
        cin >> *pDouble++;
    }

    cout << setprecision(2) << fixed;
    cout << "Your values are: " << endl;
    showArray(doubleArray, SIZE);

    cout << "Now going backwards: " << endl;
    showArrayReverse(doubleArray, SIZE);

    return 0;
}

// show an array's contents
void showArray(double* array, int size)
{
    for (int i = 0; i < size; i++)
        cout << *array++ << endl;
}

// show an array's contents in reverse
void showArrayReverse(double* array, int size)
{
    array += size;
    for (int i = 0; i < size; i++)
        cout << *--array << endl;
}
