#include <iostream>
#include <vector> //must include to use vectors

using namespace std;

int main () {
    
    // vector<int> vec; //1st way of declaring vector

    // vector <int> vec = {25, 56, 25}; //2nd way to declare vectors

    // vector <int> vec (5,0); //3rd way
    // (size, value)

    vector <char> chars = {'a', 'b', 'c', 'd'};

    for (char val : chars){
        cout<<val<<" ";
    }


    // cout<<vec[1];
    return 0;
}