// sales.cpp
// M. Ozmen
// 4/2/2020
// This program demonstrates that a pointer may be used as a
// parameter to accept the address of an array. Either subscript
// or pointer notation may be used.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getSales(double *sales, int size);
double totalSales(double *sales, int size);
void diffSales(double *sales, int size);

int main()
{
  const int QUARTERS = 4;
  double sales[QUARTERS];

  // Get the sales data for all quarters
  getSales(sales, QUARTERS);

  // Set the numeric output formatting
  cout << setprecision(2);
  cout << fixed << showpoint;

  // Display the total sales for the year
  cout << "The total sales for the year are $";
  cout << totalSales(sales, QUARTERS) << endl;

  // Display the differences between quarterly sales
  diffSales(sales, QUARTERS);
  return 0;
}

// getSales function uses a pointer to accept the address
// of an array of doubles. The number of elements in
// the array is passed as a separate integer parameter. The
// The function asks the  user to enter the sales figures for
// four quarters, then stores those figures in the array using
// subscript notation.
void getSales(double *array, int size)
{
  for (int count = 0; count < size; count++)
  {
    cout << "Enter the sales figure for quarter ";
    cout << (count + 1) << ": ";
    cin >> array[count];
  }
}

// totalSales function uses a pointer to
// accept the address of an array of doubles whose size is
// is passed as a separate parameter. The function uses pointer
// notation to sum the elements of the array.
double totalSales(double *array, int size)
{
   double sum = 0.0;

   for (int count = 0; count < size; count++)
   {
     sum += *array;
     array++;
   }
   return sum;
}

// diffSales function uses a pointer to
// accept the address of an array of doules whose size is
// is passed as a seperate parameter. The function uses pointer
// dereferencing to calculate the differences between the elements of
// an array thus the difference the quarterly sales and displays it.
void diffSales(double *array, int size)
{
  double result = 0.0;

  for (int count = 0; count < size-1; count++)
  {
     result = *array++ - *array;
     cout << "Difference between quarter " << (count+1) << " and quarter ";
     cout << (count+2) << " is $" << (-result) << endl;
  }
}
