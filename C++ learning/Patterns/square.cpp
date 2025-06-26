#include <iostream>
using namespace std;

int main () {
    // int n = 9;
    // int num = 1; 
    
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j<=n; j++ ){
    //         cout<<num<<' ';
    //         num++;
    //     }
    //     cout<<endl;
    // }


    int n = 3;
    char op = 'A'; 
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<=n; j++ ){
            cout<<op<<' ';
            op++;
        }
        cout<<endl;
    }
    return 0;
}