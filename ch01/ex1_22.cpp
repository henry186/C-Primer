#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book, sum;
    std::cin >> sum;
    while (std::cin >> book)
    {
            sum += book;
    }
    cout << sum << endl;

    return 0;
}