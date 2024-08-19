#include <iostream>
using namespace std;

bool leapYear(int year)
{
    if (year % 4000 == 0)
        return false;
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int year;
    cout << "Enter an year: ";
    while (cin >> year)
    {
        if (leapYear(year))
            cout << year << " is a leap year!" << endl;
        else
            cout << year << " is not a leap year!" << endl;
        cout << "Enter an year: ";
        
    }
    return 0;
}