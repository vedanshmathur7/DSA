// *Question 3: Scope Explorer*
// Write a C++ program that:
// - Declares a global integer variable counter initialized to 100.
// - Defines a function updateCounter() that declares a local variable counter and increments it by 10.
// - In main(), declare another local counter initialized to 50.
// - Call updateCounter() twice, then print:
//   - The global counter.
//   - The local counter in main().
//   - Explain in a comment why the global counter doesn’t change when updateCounter() is called.

# include <iostream>
using namespace std;

int glo = 100;

int updateCounter(int glow){
    cout<< glow + 10<<endl;
}

int main (){
    int glow = 50;
    updateCounter(glow);
    updateCounter(glow);
    cout << glo<<endl;
    // cout << glow<<endl;

    return 0;
}