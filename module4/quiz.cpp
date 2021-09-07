#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0;

    for (i = 0; i < 2; i++)
    {
        j = 0;
        while (j++ < 2)
        {
            if (i > 0)
                break;
            cout << "while loop: i = " << i << ", j = " << j << endl;
        }
        cout << "for loop: i = " << i << ", j = " << j << endl;
    }

    return 0;
}
