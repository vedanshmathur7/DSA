// Write a C++ program that:

// Takes user input for an integer number using cin in main().
// Defines a function categorizeNumber that takes an integer parameter and uses a switch-case statement to print:
// "Single digit" if number is between 0 and 9 (use a condition inside the case).
// "Teen" if number is between 10 and 19.
// "Tens" if number is between 20 and 99.
// "Negative" if number is less than 0.
// "Hundreds or more" for any other positive number (100 or greater).
// Hint: Use if conditions within case statements or divide number to simplify cases (e.g., number / 10).
// Calls categorizeNumber from main() and displays the result.

// #include <iostream>
// using namespace std;

// void categorizeNumber(int number){
//     if (number >0 && number <=9){
//         cout << "Single digit\n";
//     }
//     else if (number >10 && number <=19){
//         cout << "Teen\n";
//     }
//     else if (number >20 && number <=99){
//         cout << "Tens\n";
//     }
//     else if (number<0){
//         cout << "Negative\n";
//     }
//     else if (number>=100){
//         cout << "Hundreds or more\n";
//     }
// }

// int main (){
//     int number;
//     cout <<"Enter the no. : ";
//     cin >> number;
//     categorizeNumber(number);

//     return 0;
// }


#include <iostream>
using namespace std;

void categorizeNumber(int number) {
    switch (number / 10) { // Divide by 10 to group numbers
    case 0: // 0–9
        if (number >= 0 && number <= 9) {
            cout << "Single digit" << endl;
        }
        break;
    case 1: // 10–19
        cout << "Teen" << endl;
        break;
    case 2: // 20–29
    case 3: // 30–39
    case 4: // 40–49
    case 5: // 50–59
    case 6: // 60–69
    case 7: // 70–79
    case 8: // 80–89
    case 9: // 90–99
        cout << "Tens" << endl;
        break;
    default:
        if (number < 0) {
            cout << "Negative" << endl;
        } else {
            cout << "Hundreds or more" << endl;
        }
        break;
    }
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    categorizeNumber(number);

    return 0;
}