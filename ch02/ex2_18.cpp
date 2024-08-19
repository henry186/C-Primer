#include<iostream>

using namespace std;

int main(){
    int num = 10;
    int *p = &num;
    
    cout << "the value pointed by the pointer is: " << *p << endl;
    //Change the value which is pointed by the pointer
    *p = 100;
    cout << "After the operation" << endl;
    cout << "the value pointed by the pointer is: " << *p << endl;

    cout << "the value of the pointer is: " << p << endl;
    //Change the value of the pointer
    p += 4;
    cout << "After the operation" << endl;
    cout << "the value of the pointer is: " << p << endl;    
}