#include <iostream>
using namespace std;

int main (){

    int sum = 0, n= 7;
    for (int i = 1; i<= n ; i = i+2){
        sum += i;
    }
    cout<<sum;
    return 0;
}