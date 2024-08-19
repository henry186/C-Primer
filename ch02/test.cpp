#include<iostream>
using namespace std;

int main(){
    int* ip, i, &r = i;
    int cnt = 0;
    const int sz = cnt;
    cnt = 99;
    cout << sz;
    

    ip = &i;
    i = 99;
    cout << *ip << endl;
    r = 5;
    cout << r << endl;
    return 0;
}   

