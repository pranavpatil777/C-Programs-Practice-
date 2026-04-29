#include <iostream>
using namespace std;
// BruteForce Approch : O(n^3)
int largest_subarrsum(int arr[], int n){
    int largestsum = 0;
    for(size_t i = 0; i < n; i++){
        for(size_t j = i; j < n; j++){

            int currsum = 0;

            for(size_t k=i; k<= j; k++){
                currsum += arr[k];
            }

            largestsum = max(largestsum, currsum);
        }
    }
    return largestsum;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(int);
    cout <<  largest_subarrsum(arr, n);
    return 0;
}