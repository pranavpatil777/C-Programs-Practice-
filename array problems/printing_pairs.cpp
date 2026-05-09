#include <iostream>
#include <cstdlib> 
using namespace std;

void printing_pairs(int arr[], int n){
    for(size_t i = 0; i < n; i++){
        int x = arr[i];
        for(size_t j = i +1; j < n; j++){
            int y = arr[j];
            if((x + y) % 2 == 0 && abs(x - y) > 10){
                cout << "(" << x << "," << y << ")" << endl;
            }
        }
        cout << endl;
    }
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/ sizeof(int);
    for(int x : arr){
        cout << x << endl;
    }
    printing_pairs(arr, n);
    return 0;
}