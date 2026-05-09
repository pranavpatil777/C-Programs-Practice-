/*K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format
In the function an integer vector and number k is passed.

Output Format
Return an integer vector.

Sample Input
{1, 3, 5, 7, 9}, x = 2

Sample Output
{7, 9, 1, 3, 5}

Explanation
After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}
After 3rd rotation - {5, 7, 9, 1, 3}
After 4th rotation - {3, 5, 7, 9, 1}
After 5th rotation - {1, 3, 5, 7, 9}

1 to 4 
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> k_rotate(vector<int>arr, int k){
    k = k % 5;
    int n = arr.size();
    vector<int> output;
    for(size_t i = n - k; i <= n-1; i++){
        output.push_back(arr[i]);
    }

    for(size_t j = 0; j < n-k; j++){
        output.push_back(arr[j]);
    }
    return output;
}

int main(){
    vector<int> a = {1, 3, 5, 7, 9};
    int k = 12;
    for(int x : k_rotate(a, k)){
        cout << x << endl;
    }
    return 0;
}