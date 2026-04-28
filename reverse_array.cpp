#include <iostream>
using namespace std;

void reverse_array(int arr[], int n){
    int start = 0;
    int end = n -1;

    while(start <= end){
        int temp = 0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr)/ sizeof(int);
    reverse_array(arr, n);
    for(size_t i = 0; i < n; i++){
        cout << arr[i];
        cout << "\n";
    }
    return 0;
}