#include <iostream>
using namespace std;

int main (){
    int n = 5, sum =0;

    for (int i = 1; i<=n; i++){
        sum += i;
        if (i == 2){
            continue;
        }   
    }
    cout<<sum;
   
   
   
   
   
    // int i = 1 ;
    // while (i <= n){
    //     sum += i;
    //     i++;
    // }
    // cout<<sum;


    return 0;
}