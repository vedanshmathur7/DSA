#include <iostream>
using namespace std;

int main () {
    // int n = 10;
    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j <=i; j++){
    //         cout<<" *";
    //     }
    // cout<<endl;
    // }

    // int n = 9;
    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j <=i; j++){
    //         cout<<i<<' ';
    //     }
    // cout<<endl;
    // }

    // int n = 9;
   
    // for (int i = 0; i <n; i++){
    // char op = 'A' + i;
    //     for (int j = 0; j <=i; j++){
    //         cout<<op<<' ';
    //     }
    // cout<<endl;
    // }


    // int n = 6;

    // for (int i = 1; i <=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<<j<<' ';
    //     }
    //     cout<<endl;
    // }


    int n = 9;

    for (int i = 1; i <=n; i++){
        for (int j = i; j>=1; j--){
            cout<<j;
        }
        cout <<endl;
    }



    return 0;
}