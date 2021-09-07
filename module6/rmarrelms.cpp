// rmarrelms.cpp
// D. Singletary
// 6/3/18
// Implements function to remove a specific array element

#include <iostream>
using namespace std;

// display array elements on a single line
void prArray(const int[], const int);

// remove specified element (index)
void rmArrElm(int arr[], const int elm, const int sz);

int main()
{
      const int SIZE = 6;
      int arrayA[SIZE] = { 10, 20, 30, 40, 50, 60 };
      int rmItem = 0;

      cout << "Please enter the element to remove (0 to " << SIZE-1 << "): ";
      cin >> rmItem;
      cout << "Original array: " << endl;
      prArray(arrayA, SIZE);
      rmArrElm(arrayA, rmItem, SIZE);
      cout << "New array: " << endl;
      prArray(arrayA, SIZE-1);
}

void prArray(const int arr[], const int sz)
{
    for (int i = 0; i < sz; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void rmArrElm(int arr[], const int elm, const int sz)
{
    int tmpArr[sz];
    int j = 0;
    for (int i = 0; i < sz; i++)
        if (i != elm)
            tmpArr[j++] = arr[i];
    for (int i = 0; i < j; i++)
        arr[i] = tmpArr[i];
    arr[j] = '\0';
}
