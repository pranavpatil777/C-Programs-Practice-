#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){

    for(int i = 0; i < n-1; i++){

        bool swapped = false;

        for(int j = 0; j < n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        // No swaps means array already sorted
        if(swapped == false){
            break;
        }
    }
}

int main(){
    // int arr[] = {1, 5, 8, 3, -1, -3, 12};
    int arr[] = {1, 3, 5, 7};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    for(auto x : arr){
        cout << x << " ";
    }
    return 0;
}