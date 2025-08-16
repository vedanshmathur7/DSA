#include <iostream>
using namespace std;

//using 2 pointer approach

void reverseArr (int arr[], int size){
    int start = 0;
    int end = size-1;

    while (start < end){
        swap (arr[start], arr[end]); //built in function to swap two values
        start++; end--;
    }
}

int main () {
    
    int arr[] = {89, 25, 56, 58, 2, 69};
    int size = 6;

    reverseArr(arr, size);

    for (int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}