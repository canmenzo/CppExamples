// arraydemo.cpp
// M. Ozmen
// 2/21/2020

#include <iostream>
using namespace std;

int main() {

	const int NUM_INTS = 10;
	int iArray[NUM_INTS] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	for (int i = 0; i < NUM_INTS; i++)
		cout << "array is equal to " << i << endl;


	return 0;
}
