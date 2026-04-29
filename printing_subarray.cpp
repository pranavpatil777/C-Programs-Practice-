#include <iostream>
using namespace std;

void printing_subarr(int arr[], int n){
     for(size_t i = 0; i < n; i++){
        for(size_t j = i; j < n; j++){
            for(size_t k = i; k<= j; k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }
     }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(int);
    printing_subarr(arr, n);
    return 0;
}