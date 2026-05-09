#include <iostream>
using namespace std;

int linear_search(int* arr, int n, int key){
    for(size_t i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr)/ sizeof(int);
    int key = 80;
    cout << "Found the element at index : " << linear_search(arr, n, key);
    return 0;
}