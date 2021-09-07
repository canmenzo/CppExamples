// reversearray.cpp
// tests a function which returns a reversed array
// D. Singletary
// 6/1/17

#include <iostream>
using namespace std;

void reverse(int array[], const int SIZE);  // returns reversed array

int main()
{
    const int SIZE = 4;
    const string PROMPT_PLEASE_ENTER = "Please enter ";
    const string PROMPT_INTEGERS = " integers: ";

    int array[SIZE] = { 0, 0, 0, 0 };

    cout << PROMPT_PLEASE_ENTER << SIZE << PROMPT_INTEGERS;

    for (int i = 0; i < SIZE; i++)
        cin >> array[i];

    cout << "original = ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    reverse(array, SIZE);

    cout << "reversed = ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

void reverse(int array[], const int SIZE)
{
    // temp array to store reversed values
    int reversed[SIZE];

    // traverse array from front to back, copy from back to front
    for (int i = 0, j = SIZE - 1; i < SIZE; i++, j--)
       reversed[i] = array[j];

    // copy reversed array back into original
    for (int i = 0; i < SIZE; i++)
        array[i] = reversed[i];
}
