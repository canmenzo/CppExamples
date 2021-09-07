// removeArray.cpp
// removes an array element chosen by user after getting an set of array elements and displays results
// M. Ozmen
// 2/24/2020

#include <iostream>
using namespace std;

// function declarations
void enterArray(int nums[], const int SIZE); // enter arrays
void showArray(int nums[], int size); // displays arrays
void removeArray(int nums[], const int SIZE); // returns removed array

int main()
{
	// constants & variables
	const int SIZE = 6;
	int nums[SIZE] = { 0, 0, 0, 0, 0, 0 };
	const int i = 0;
	const string PROMPT_NEW_ARRAY = "Please enter 6 elements for an array:";
	const string PROMPT_RM_ENTER = "Please enter the element to remove (0 to 5): ";
	const string PROMPT_ORIGINAL = "Original array:";

	// enter array elements
	cout << PROMPT_NEW_ARRAY << endl;
	enterArray(nums, SIZE);

	// display the original array
	cout << PROMPT_ORIGINAL << endl;
	showArray(nums, SIZE);

	// remove an array of element
	cout << PROMPT_RM_ENTER << endl;
	removeArray(nums, SIZE);

	return 0;
}

void enterArray(int nums[], int size)
{
	for (int i=0; i<size; i++)
		cin >> nums[i];
}

void showArray(int nums[], int size)
{
	for (int i=0; i<size; i++)
		cout << nums[i] << " ";
    cout << endl;
}

void removeArray(int nums[], int size)
{
    int intRemove;
	cin >> intRemove;
    int count = 0;
	for (int i=0; i<size; i++)
    {
        if (nums[i]==intRemove)
        {
            for(int rm=i; rm<(size-1); rm++)
            {
                nums[rm]=nums[rm+1];
            }
            count++;
            break;
        }
    }
    if (count == 0)
    {
    	cout << "Element " << intRemove << " is not valid.";
    }
    else
    {
   		cout << "New array:" << endl;
   		for (int i=0; i<(size-1); i++)
   		{
   			cout << nums[i] << " ";
   		}
   	}
}
