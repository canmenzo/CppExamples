#include <iostream>
using namespace std;

int main()
{
    // constants for fruit values and names
    const int MAX_FRUIT = 5;
    const int FRUIT_APPLE = 1,
              FRUIT_BANANA = 2,
              FRUIT_GRAPE = 3,
              FRUIT_ORANGE = 4,
              FRUIT_TANGERINE = 5;
    const string FRUITNM_APPLE = "Apple",
                 FRUITNM_BANANA = "Banana",
                 FRUITNM_GRAPE = "Grape",
                 FRUITNM_ORANGE = "Orange",
                 FRUITNM_TANGERINE = "Tangerine",
                 FRUITNM_UNKNOWN = "Unknown";

    // your code goes here
    for (int index = 0; index < MAX_FRUIT+1; index++)
    {
        switch (index)
        {
            case FRUIT_APPLE:
                cout << "Fruit=" << FRUIT_APPLE << " (\"";
                cout << FRUITNM_APPLE << "\")" << endl;
                break;
            case FRUIT_BANANA:
                cout << "Fruit=" << FRUIT_BANANA << " (\"";
                cout << FRUITNM_BANANA << "\")" << endl;
                break;
            case FRUIT_GRAPE:
                cout << "Fruit=" << FRUIT_GRAPE << " (\"";
                cout << FRUITNM_GRAPE << "\")" << endl;
                break;
            case FRUIT_ORANGE:
                cout << "Fruit=" << FRUIT_ORANGE << " (\"";
                cout << FRUITNM_ORANGE << "\")" << endl;
                break;
            case FRUIT_TANGERINE:
                cout << "Fruit=" << FRUIT_TANGERINE << " (\"";
                cout << FRUITNM_TANGERINE << "\")" << endl;
                break;
            default:
                cout << "Fruit=" << index << " (\"";
                cout << FRUITNM_UNKNOWN << "\")" << endl;
                break;
        }
    }

    return 0;
}


