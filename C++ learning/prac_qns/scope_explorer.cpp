// *Question 3: Scope Explorer*
// Write a C++ program that:
// - Declares a global integer variable counter initialized to 100.
// - Defines a function updateCounter() that declares a local variable counter and increments it by 10.
// - In main(), declare another local counter initialized to 50.
// - Call updateCounter() twice, then print:
//   - The global counter.
//   - The local counter in main().
//   - Explain in a comment why the global counter doesn’t change when updateCounter() is called.

#include <iostream>
using namespace std;

// Global variable
int counter = 100;

// Function to update a local counter
void updateCounter() {
    int counter = 0; // Local variable, shadows global counter
    counter += 10;   // Increment local counter by 10
    cout << "Local counter in updateCounter: " << counter << endl;
}

int main() {
    int counter = 50; // Local variable in main, shadows global counter
    updateCounter();  // Calls function, local counter = 10
    updateCounter();  // Calls function again, local counter = 10
    cout << "Global counter: " << counter << endl; // Prints global counter (100)
    cout << "Local counter in main: " << counter << endl; // Prints local counter (50)
    // Explanation: The global counter remains 100 because the local counter in updateCounter()
    // and main() shadows it. Each function call creates a new local counter initialized to 0,
    // incremented to 10, and destroyed after the function ends, leaving the global counter unchanged.

    return 0;
}