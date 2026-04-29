#include <iostream>
using namespace std;

void subarr_sum(int arr[], int n){
    int sum = 0;
     for(size_t i = 0; i < n; i++){
        for(size_t j = i; j < n; j++){
            for(size_t k = i; k<= j; k++){
                sum += arr[k];
                cout << arr[k] << ",";
            }
            cout << " " << "SUM= " << sum;
            sum = 0;
            cout << endl;
        }
     }
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(int);
    subarr_sum(arr, n);
    return 0;
}