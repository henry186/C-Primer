#include<iostream>
#include"Sales_item.h"

/* count each identity isbn transcation, the input isbn must be ascending*/
int main(){
    Sales_item trans, total;
    if (std::cin >> total)
    {
        while(std::cin >> trans)
        {
            if(trans.isbn() == total.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << "The total sales:" << total << std::endl;
                total = trans;
            }
        }
        std::cout << "The total sales:"<< total << std::endl;
    }
    else
    {
        std::cerr << "No data?" << std::endl;
    }

    return 0;
}