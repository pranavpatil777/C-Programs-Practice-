#include <iostream>
#include <vector>
using namespace std;

vector<int> k_rotate(vector<int>arr, int k){
    k = k % 5;
    int n = arr.size();
    int s = 0; 
    int e = n-k-1;
    int temp = 0;
    
    while (s<= e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++; 
        e--;
    }
    s = n-k;
    e = n -1;
    temp = 0;
    while (s<=e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    s =0;
    e = n -1;
    temp = 0;
    while (s<=e){
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    return arr;
}

int main(){
    vector<int> a = {1, 3, 5, 7, 9};
    int k = 12;
    for(int x : k_rotate(a, k)){
        cout << x << endl;
    }
    return 0;
}