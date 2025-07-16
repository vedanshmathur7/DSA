#include <iostream>
using namespace std;

int main () {

    int n = 5;
    for (int i = 1; i <=n; i++){
        for (int j = n ; j<=1; j++){
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}