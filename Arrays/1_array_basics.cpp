#include <iostream>
using namespace std;

int main (){

    // int marks[] = {56, 25, 56, 89}; //creating array of desired no. elements
    int num = 5; 
    int marks[num];

    // cout<<marks[3]; //accessing 3rd element from the array

    for (int i = 1; i <=num; i++){
        cin>>marks[i];
    }
    for (int i = 1; i <=num; i++){
        cout<<marks[i]<<endl;
    }
    
    return 0;
}