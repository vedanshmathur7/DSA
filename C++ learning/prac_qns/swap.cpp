#include<iostream>
using namespace std;

// Question 1: Variable Swap
// Write a C++ program that:

// Declares two integer variables, a and b, with values 10 and 20, respectively.
// Uses a function called swapNumbers() to swap their values without using a temporary variable.
// Prints the values of a and b before and after swapping using cout.



void swapnumbers (int a, int b) {
    a = a+b;
    b = a - b;
    a = a - b;
    cout<<"After swapping\n";
    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
}

int main (){
    int a = 10;
    int b = 20;

    cout<<"Initial a and b are : "<<a<<" and b : "<<b<<endl;
    swapnumbers(a,b);
    return 0;
}