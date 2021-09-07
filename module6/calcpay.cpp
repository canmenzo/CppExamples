// calcpay.cpp
// use an array to store hours worked for employees
// and calculate gross/total pay
#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_WORKERS = 5; // number of employees
const string STR_HOURSPROMPT = "Enter the hours worked by ";
const string STR_RATEPROMPT = "Enter hourly pay rate for everyone: $";
const string STR_EMPNUM = "Employee #";
const string STR_GROSS = "Gross pay";
const string STR_TOTALPAY = "Total pay";
const string STR_COLSPACE = ": ";
const string STR_COLSPACEDOLLAR = ": $";

int main()
{
        int hours[NUM_WORKERS];     // array to store hours
        double payRate = 0.0;       // hourly pay rate
        double grossPay = 0.0;      // employee's gross pay
        double totalPay = 0.0;

        // input hours worked by each
        cout << STR_HOURSPROMPT << endl;
        for (int worker = 0; worker < NUM_WORKERS; worker++)
        {
                cout << STR_EMPNUM << (worker + 1) << STR_COLSPACE;
                cin >> hours[worker];
        }

        // input hourly pay rate for all
        cout << STR_RATEPROMPT;
        cin >> payRate;

        // display each employee's gross payRate
        cout << STR_GROSS << STR_COLSPACE << endl;
        cout << fixed << showpoint << setprecision(2);

        for (int worker = 0; worker < NUM_WORKERS; worker++)
        {
                grossPay = hours[worker] * payRate;
                totalPay += grossPay;
                cout << STR_EMPNUM << (worker + 1) <<
                        STR_COLSPACEDOLLAR <<
                        setw(7) << grossPay << endl;
        }

        cout << STR_TOTALPAY << STR_COLSPACEDOLLAR << totalPay << endl;

        return 0;
}
