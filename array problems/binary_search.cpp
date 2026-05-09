#include <iostream>
using namespace std;

// int* binary_search(int* arr, int n, int key){
//     int* start = arr;
//     int* end = arr + n-1;
//     while (start <= end){
//         int* mid = start + ( end - start) / 2 ;
//         if(*mid == key){
//             return mid;
//         }else if(*mid < key){
//              start = mid + 1;
//         }else{
//             end = mid - 1;
//         }
//     }
    
//     return NULL;
// }

int binary_search(int arr[], int n, int key){
    int start = 0;
    int end = n -1;
    while (start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr)/ sizeof(int);
    int key = 80;
    cout << "Found the element at index : " << binary_search(arr, n, key);
    return 0;
}