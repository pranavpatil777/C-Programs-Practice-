#include <iostream>
using namespace std;

int maximum_subarr_sum(int arr[], int n){
    int cs = 0;
    int largestsum =0;

    for(size_t i = 0; i < n; i++){
        cs += arr[i];
        if(cs < 0){
            cs = 0;
        }
        largestsum = max(largestsum, cs);
    }
    return largestsum;
}

int main(){
    int arr[] = {5, 0, -1, 0, 1, 2, -1};
    int n = sizeof(arr) / sizeof(int);
    cout << maximum_subarr_sum(arr , n);
    return 0;
}