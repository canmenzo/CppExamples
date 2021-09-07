//showandincr.cpp

#include <iostream>
using namespace std;

void showValues(int intArray[], int size);
void incrValues(int intArray[], int size);

int main ()
{
	const int ARRAY_SIZE = 8;
	int collection[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

	cout << "The array contains the values" << endl;
	showValues(collection, ARRAY_SIZE);

	incrValues(collection, ARRAY_SIZE);

	cout << "After increment, the array contains the values" << endl;
	showValues(collection, ARRAY_SIZE);

	return 0;
}

void showValues(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}

void incrValues(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		nums[index]++;
}
