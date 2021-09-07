// module6.cpp
// removes an array element chosen by user after getting an set of array elements and displays results
// M. Ozmen
// 2/24/2020

#include <iostream>
using namespace std;

// function declarations
void showArray(int nums[], const int size); // displays arrays
void removeArray(int nums[], const int SIZE, int intRemove); // returns removed array

int main()
{
	// constants & variables
	const int SIZE = 6;
	int intRemove = 0;
	int nums[SIZE] = { 10, 20, 30, 40, 50, 60 };
	const string PROMPT_RM_ENTER = "Please enter the element to remove (0 to 5): ";
	const string PROMPT_ORIGINAL = "Original array:";

    // display the prompt text messages
	cout << PROMPT_RM_ENTER;
  	cin >> intRemove;
    cout << PROMPT_ORIGINAL << endl;

    // call the functions
    showArray(nums, SIZE);
	removeArray(nums, SIZE, intRemove);

	return 0;
}

// this function displays the original array element values
void showArray(int nums[], int size)
{
	for (int i=0; i<size; i++)
		cout << nums[i] << " ";
    cout << endl;
}

// this function removes the element from the array and displays it after validating if its a valid choice
void removeArray(int nums[], int size, int intRemove)
{
    if (intRemove>=0 && intRemove<=5)
    {
        cout << "New array:" << endl;
        for(int i = (intRemove+1); i<=5; i++)
        {
            nums[i-1] = nums[i];
        }
        nums[5]=0;
        for(int i = 0; i<=5; i++)
            if (nums[i] != 0)
                cout << nums[i] << " ";
            else
                cout << endl;
    }
    else
    {
      cout << "Invalid choice to delete.";
    }
}

