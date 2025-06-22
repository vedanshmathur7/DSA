#include <iostream>
using namespace std;
int glo = 90;

void sum(){
    cout<<glo<<endl;
}

int main (){
    int glo = 56;
    glo = 78;

    sum(); // will print 90 that is global variable
    cout<<glo<<endl; // will print 90 that is local variable
    return 0;
}