/*
Two Sum Pattern
Problem

Given array:
[2,7,11,15]

Target:
9

Return indices of two numbers whose sum equals target.

Output:
[0,1]

because:
2 + 7 = 9
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force
pair<int, int> twoSum(vector<int>& arr, int n, int k){
    
    for(size_t i = 0; i < n; i++){
        for(size_t j = i+1; j <n; j++){
            if(arr[i] + arr[j] == k){
                return {i , j};
            }
        }
    }
    return {0 , 0};
}

//optimal solution
pair<int,int> twoSum2(vector<int>& arr, int target){
    int cs = 0;
    for(int i = 0; i < arr.size(); i++){

        int needed = target - arr[i];
        for(size_t j=i+1; j < arr.size(); j++){
            if(arr[j] == needed){
                return {i , j};
            }
        }
    }

    return {-1,-1};
}

int main(){
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    int k = 9;
    auto [a,b] = twoSum(arr, n, k);
    auto [c,d] = twoSum2(arr, k);
    cout<< "[" << a << "," << b << "]";
    cout<< "[" << c << "," << d << "]";
    return 0;
}