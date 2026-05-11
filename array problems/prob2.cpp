/*
Next Problem — Slightly Harder
Remove Duplicates From Sorted Array

Given sorted array:

[1,1,2,2,2,3,4,4]

Transform in-place into:

[1,2,3,4,_,_,_,_]

Return count of unique elements.

Expected unique count:
4

Rules
Must be in-place
O(1) extra space
O(n) time
Relative order preserved

*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr){
    if(arr.empty())
        return 0;

    int k = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[k - 1]){
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}

int main(){

    vector<int> arr = {1,1,2,2,2,3,4,4};
    int uniqueCount = removeDuplicates(arr);
    cout << "Unique Count: " << uniqueCount << endl;

    for(int i = 0; i < uniqueCount; i++){
        cout << arr[i] << " ";
    }
}