#include <iostream>
#include <climits> //to use infinite no. m
using namespace std;

int main () {
    
    int num [] = {45, 8, -9, -178, 90};
    int size = 5;
    int smallest = INT_MAX; // +infinite no.
    int largest = INT_MIN; //-infinite no. (so that array ka num jeete ... isliye chhota liya h)
    int smallest_index = 0;

    for (int i =0; i<size; i++){
        if (num[i] < smallest){
            smallest = num[i];
            smallest_index = i; 
        }

        // smallest = min(num[i], smallest); //built-in 'min' function for two num comparison
    }
    cout<<"smallest no. : "<<smallest<<endl;
    cout<<smallest_index<<endl;

    return 0;
}