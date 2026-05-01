#include <iostream>
using namespace std;

int max_subarr_sum(int arr[], int n){
    int currentSum = arr[0];
    int maxSum = arr[0];

    for(size_t i = 0; i < n; i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum , currentSum);
    }
    return maxSum;
}

int main(){
    int A[] = {-4, -2, -7, -3};
    int n = sizeof(A)/sizeof(int);
    cout << max_subarr_sum(A, n);
    return 0;
}