#include <iostream>
using namespace std;

int main () {
    
    int a = 45;
    // a++;
    int* ptr = &a;

    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    
    // cout<<&ptr<<endl;

    cout<<*(ptr)<<endl; //45 
    cout<<*(&a)<<endl; //45
    cout<<*(&ptr)<<endl; //0x61ff0c

    return 0;
}