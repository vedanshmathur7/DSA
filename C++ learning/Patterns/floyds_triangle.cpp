#include <iostream>
using namespace std;

int main () {
    // int n = 4;
    // int num = 1;
    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<<num<<' ';
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // int n = 5;
    // char op = 'A';

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1 ; j<=i; j++){
    //         cout<<op<<' ';
    //         op++;
    //     }
    //     cout <<endl;
    // }



    int n = 4;
    char op = 'A';

    for (int i = 1; i <=n; i++){
        
        for (int j = i; j>=1 ; j--){
            cout<<char(op + (j-1))<<' ';
        }
        cout<<endl;
    }
    return 0;
}