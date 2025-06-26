#include <iostream>
using namespace std;

int main (){

    // int sum = 0, n= 7;
    // for (int i = 1; i<= n ; i = i+2){
    //     sum += i;
    // }
    // cout<<sum;
    // return 0;

    // int odd_sum = 0, i =0, n=7;
    // while (i <= n){
    //     if (i%2 != 0){
    //         odd_sum += i;
    //     }
    // i++;
    // }
    // cout<<odd_sum ;
    int n = 5, sum = 0;


    for (int i = 0; i <= n; i= i + 2){
        sum += i;
    }
    cout << sum;
    return 0;
}