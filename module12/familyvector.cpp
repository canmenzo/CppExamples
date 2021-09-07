// familyvector.cpp
// prompts for and stores family first names in a vector, then
// adds concatenated first/last names to vector and displays them.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SIZE = 8;
    const string PROMPT_FN = "Enter first name for family member ";
    const string PROMPT_LN = "Enter last name: ";
    const string STR_HEREARE = "Here are the members of the ";
    const string STR_FAMILY = " family:\n";

    string ln; // store last name
    vector<string> v(SIZE); // store first names
    int count = 1;

    for (int i = 0; i < SIZE; i++)
    {
        cout << PROMPT_FN << i + 1 << ": ";
        cin >> v[i];
    }

    cout << PROMPT_LN;
    cin >> ln;

    for (int i = 0; i < SIZE; i++)
        v.push_back(v[i] + " " + ln);

    // start at the (old) end of the vector and print
    // the full family names.
    cout << STR_HEREARE << ln << STR_FAMILY;
    for (int i = SIZE; i < v.size(); i++)
        cout << "\t" << v[i] << endl;

    return 0;
}