// Given an array of integers A (sorted) and a integer Val.
// Implement a function that takes A and Val as input parameters and returns the lower bound of Val
// Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.
// Otherwise Val itself is the answer.
// If Val is less than smallest element of array A then return '-1' in that case.

// Example 1  :
// A = [-1, -1, 2, 3, 5]
// Val = 4
// Answer :  3

// Since 3 is just smaller than 4 in the array.

// Example 2  :
// A = [1, 2, 3, 4, 6]
// Val = 4
// Answer :  4
#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int>A, int Val){
    
    int l = 0; 
    int r = A.size() - 1;
    int answer = -1;
    while (l <= r){
       int mid = (l + r)/2;
       if(A[mid] > Val){
         r = mid - 1;
       }else{
         answer = A[mid];
         l = mid+1;
       }
    }
    return answer;
}

int main(){
    vector<int> A = {-1, -1, 2, 3, 5};
    int Val = 4;
    cout << lower_bound(A, Val);
    return 0;
}