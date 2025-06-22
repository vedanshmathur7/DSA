// Question 2: Simple Calculator
// Write a C++ program that:

// Declares two float variables, num1 and num2, with values 15.5 and 5.5.
// Defines a function calculate that takes two float parameters and prints their sum, difference, product, and division (handle division by zero).
// Calls the calculate function from main() and displays the results.


#include <iostream>
using namespace std;

void calculate (float a, float b ){
    cout<<"The sum is "<<a+b<<endl;
    cout<<"The diff is "<<a-b<<endl;
    cout<<"The prod is "<<a*b<<endl;
    if (b ==0){
        cout<<"Please enter non zero value of the denominator";
    }
    else{
        cout<<"The div is "<<a/b<<endl;
    }
}

int main (){
    float a = 89.36;
    float b = 45.36;
    calculate (a,b);
    return 0;
}