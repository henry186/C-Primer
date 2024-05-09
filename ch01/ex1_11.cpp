#include<iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "enter two numbers: " << endl;
    cin >> start >> end;
    cout << endl;
    if(start > end)
    {
        while (start >= end)
        {
            cout << start << endl;
            start--;
        }
    }
    else
    {
        while (start <= end)
        {
            cout << start << endl;
            start++;
        }
    }

    return 0;
}