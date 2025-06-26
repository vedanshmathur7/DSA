#include<iostream>
using namespace std;

int main (){
    int n = 18, count = 0;
    for (int i = 1; i <=n; i++){
        if (n % i == 0){
            count ++;
        }
    }
    if (count == 2){
        cout<<"the no. is prime";
    }
    else{
        cout<<"the no. is not prime.";
    }
    
    return 0;
}