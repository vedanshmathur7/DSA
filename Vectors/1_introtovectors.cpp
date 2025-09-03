#include <iostream>
#include <vector> //must include to use vectors

using namespace std;

int main () {
    
    // vector<int> vec; //1st way of declaring vector

    // vector <int> vec = {25, 56, 25}; //2nd way to declare vectors

    // vector <int> vec (5,0); //3rd way
    // (size, value)

    // vector <char> chars = {'a', 'b', 'c', 'd'};


    vector <char> vednsh = {'a', 'b', ':', 'c'};

    for (char i : vednsh){ // for each loop (int idx_val : vector_name):
        cout<<i<<" ";
    }
    return 0;
}