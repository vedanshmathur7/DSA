// --------------------Q1 (sum of array)---------------------

// #include <iostream>
// using namespace std;

// int sumArr (int arr[], int size){
//     int sum = 0;
//     for (int i =0; i<size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// int main () {
    
//     int arr[] = {5, 6, 3, 4};
//     int size = 4;

//     cout<<"The sum of the given array is: "<<sumArr(arr, size)<<endl;
//     return 0;
// }

// ------------------------Q2 (swap max and min no. of array)--------------

// #include <iostream>
// #include <climits> 
// using namespace std;

// void swapArr (int arr[], int size){
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int small_idx = -1;
//     int large_idx = -1;

//     for (int i =0; i<size; i++){
//         if (arr[i] < smallest){
//             smallest = arr[i];
//             small_idx= i;
//         }
//         if(arr[i] > largest){
//             largest = arr[i];
//             large_idx= i;
//         }
//     }

//     if (large_idx != -1 && small_idx != -1){
//         swap (arr[small_idx], arr[large_idx]);
//     }
// }

// int main () {
    
//     int arr[] = {56, 25, 25, 135, 12, -1};
//     int size = 6;

//     swapArr(arr, size);

//     cout<<"After swapping largest and smallest no. inside the array: ";
//     for (int i =0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// -----------------Q3 (to print all the unique values of the array)---------------------

#include <iostream>
using namespace std;

void findUnique (int arr[], int size){


    for (int i =0; i<size; i++){
        bool isunique= true;

        for (int j=0; j<size; j++){
            if (i!=j && arr[i] == arr[j]){
                isunique = false;
                break;
            }
        }

        if (isunique){
            cout<<arr[i]<<endl;
        }
    }
    cout<<endl;

}

int main () {
    
    // int arr[] = {89, 89, 58, 56, 58, 56, 25, 25, 5, 9, 90, 87};
    int arr[] = {10, 20, 30, 20, 40, 10, 50};

    int size = 7;

    findUnique(arr, size);

    return 0;
}