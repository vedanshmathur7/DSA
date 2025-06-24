// Write value C++ program that:

// Takes user input for value float value and an integer scale using cin.
// Defines value function analyzeTypes that takes value float and an integer as parameters and prints:
// The integer part of value using typecasting.
// The result of value * scale as both value float and an integer (use typecasting for the integer result).
// Whether the float result of value * scale is greater than its integer result (use comparison operators).
// The size of value and (int)value using sizeof.
// Calls analyzeTypes from main() and displays all results.

#include <iostream>
using namespace std;

void analyzetypes (float value, int scale){
    float float_result = float (value*scale);
    int int_result = int (value*scale);

    cout<<"The integer part of the float no. is : "<<int(scale)<<endl;
    cout<<"The result of value * scale as float : "<<float_result<<endl;
    cout<<"The result of value * scale as integer : "<<int_result<<endl;
    cout <<"Is float result > int result ? : "<<(float_result > int_result)<<endl;
    cout << "The size of value is : "<<value<<"\nThe size of int(value) : "<<int(value)<<endl;


}

int main (){
    float value;
    int scale;
    cout<<"Enter the float no. : ";
    cin>>value;
    cout<<"\nEnter the int no. : ";
    cin>>scale;

    analyzetypes(value, scale);

    return 0;
}