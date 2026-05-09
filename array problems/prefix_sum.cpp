#include <iostream>
using namespace std;

int prefix_sum(int arr[], int n){
    int prefix[12] = {0};
    prefix[0]= arr[0];
    //prefix sum array
    for(size_t i =1; i < n; i++){
        prefix[i]= prefix[i-1] + arr[i];
    }
    int largestsum = 0;
    for(size_t i = 0; i<n; i++){
        for(size_t j = i; j<n; j++){
            
            int subarraysum = i > 0 ? prefix[j] - prefix[i -1] : prefix[j];
            largestsum = max(largestsum, subarraysum);
        }
    }
    return largestsum;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/ sizeof(int);
    cout << prefix_sum(arr, n);
    return 0;
}