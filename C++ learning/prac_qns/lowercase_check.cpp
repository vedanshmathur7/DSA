#include <iostream>
using namespace std;

int main (){
    char alpha;
    cout << "Enter the alphabet : ";
    cin>> alpha;

    // if (alpha >= 'a' && alpha <='z'){
    //     cout << "Yes it is lowercased.";
    // }
    if (alpha >= 65 && alpha <=90){
        cout << "Yes it is uppercased.";
    }
    else{
        cout << "It is lowercased.";
    } 
    // else{
    //     cout << "It is uppercased.";
    // } 

    return 0;
}