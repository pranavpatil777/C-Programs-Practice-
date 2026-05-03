// Sorted Pair Sum
// Given a sorted array and a number x, find a pair in array whose sum is closest to x.

// Input Format
// In the function an integer vector and number x is passed.

// Output Format
// Return a pair of integers.

// Sample Input
// {10, 22, 28, 29, 30, 40}, x = 54

// Sample Output
// 22 and 30

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// pair<int, int>closest_sum(vector<int> arr, int x){
//     int n = arr.size();
//     int closeSum = 0;
//     int pair1 = -1 , pair2 = -1;
//     for(size_t i = 0; i < n; i++){
//        int currentSum = 0;
//         for(size_t j = i+1; j < n; j++){
//         currentSum = arr[i] + arr[j];
//         // cout << "(" << arr[i] << "," << arr[j] << ")" << " Sum = "<< currentSum << endl;
//         if(currentSum <= x){
//             closeSum = max(closeSum, currentSum);
//             pair1 = i;
//             pair2 = j;
//         }
//       }
//     }
//     return {pair1, pair2};
// }
// Another Approch 👇
/* 
   10, 22, 28, 29, 30, 40
    |                   |
    s                   e

    s + e = 10 + 40 = 50, |50 - 54| = 4  , 50 < 54 , s++;
    s + e = 22 + 40 = 62, |62 - 54| = 8  , 64 > 54 , e--;
    s + e = 22 + 30 = 52, |52 - 54| = 2  , 52 < 54 , s++;
    s + e = 28 + 30 = 58, |58 - 54| = 4  , 58 > 54 , e--;
    s + e = 28 + 29 = 57, |57 - 54| = 3  , 57 > 54 , e--;
    
    s <= e becomes false end loop 
*/
pair <int, int> closest_sum(vector<int> arr, int x){
    int n = arr.size();
    int s = 0, e = n -1;
    int leftIdx , rightIdx;
    int Diff = INT_MAX; 

    while(s <= e){
       int cs = arr[s] + arr[e];

       if(abs(cs - x) < Diff){
          leftIdx = s;
          rightIdx = e;
          Diff = abs(cs - x);
       }
       if(cs > x)
          e--;
       else
          s++;
    }
    return {arr[leftIdx], arr[rightIdx]};
}

int main(){
    vector<int>arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    auto[a,b] = closest_sum(arr, x);
    cout << "(" << a << "," << b << ")";
    return 0;
}