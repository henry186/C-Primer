#include <iostream>
using namespace std;

int main()
{
    int sum = 0, value;
    while(cin >> value)
    {
        sum += value;
    }
    cout << "The sum of the inputs is " << sum << endl;

    return 0;
}