#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> vedansh;

    
    vedansh.push_back(89);
    vedansh.push_back(69);
    vedansh.push_back(100);

    cout<<vedansh.size()<<endl; 
    cout<<vedansh.front()<<endl; 
    cout<<vedansh.back()<<endl;
    cout<<vedansh.at(2)<<endl;
    
    vedansh.pop_back();
    cout<<vedansh.at(1)<<endl;
    // cout<<

    for( int i : vedansh){
        cout<<i<<" ";
    }
    

    return 0;
}