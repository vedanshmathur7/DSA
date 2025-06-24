// Write a C++ program that:

// Declares a const float variable taxRate = 0.08 and takes user input for two float variables itemPrice1 and itemPrice2 using cin in main().
// Defines a function calculateTotal that takes three float parameters (taxRate, itemPrice1, itemPrice2) and prints:
// The subtotal (itemPrice1 + itemPrice2) using setw(8).
// The tax amount (subtotal * taxRate) using setw(8).
// The total cost (subtotal + tax) using setw(8).
// Whether the total cost exceeds $50 (true or false).
// Calls calculateTotal from main() and displays all results.

#include <iostream>
#include <iomanip>

using namespace std;

void calculateTotal(float taxRate, float itemPrice1, float itemPrice2){
    float subtotal=  itemPrice1 + itemPrice2;
    float tax = subtotal * taxRate;
    float total_cost = subtotal + tax;
    cout <<"The subtotal : "<< setw(8)<< (itemPrice1 + itemPrice2)<<endl;
    cout <<"The tax amount : "<< setw(8)<< (subtotal * taxRate)<<endl;
    cout <<"The total cost : "<< setw(8)<<(subtotal + tax)<<endl;
    cout <<"Whether the total cost exceeds $50? : "<< (total_cost > 50)<<endl;
}

int main (){
    const float taxRate = 0.08;
    float itemPrice1 , itemPrice2;
    cout << "Enter the price 1 : ";
    cin >> itemPrice1;
    cout << "Enter the price 2 : ";
    cin >> itemPrice2;

    calculateTotal(taxRate, itemPrice1, itemPrice2);
    return 0;
}