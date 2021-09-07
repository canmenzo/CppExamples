//quiz.cpp

#include <iostream>
using namespace std;

int main()
{
    char c = 'x';
	char *pC = &c;
	cout << ++(*pC) << endl;
}
