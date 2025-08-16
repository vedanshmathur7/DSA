#include <iostream>
using namespace std;

// linear search

int linearSearch (int arr[], int size, int target){
    for (int i =0; i<size; i++){
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    
    int arr[] = {4, 58, 2, 56, 14};
    int size = 5;
    int target = 14;

    cout<<linearSearch(arr, size, target)<<endl;

    return 0;
}

//time compolexity -> O(n) (linear)