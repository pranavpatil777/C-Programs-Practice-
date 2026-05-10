/*
Problem 1 — Two Pointer Pattern (Easy-Medium)
Move All Zeros To End

Given an array:

[0,1,0,3,12]

Transform it into:

[1,3,12,0,0]

Rules:
Maintain relative order of non-zero elements
Do it in-place
Try to minimize swaps/writes
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> myfun(vector<int> a){
    int n = a.size();
    int s = 0;
    int e = n - 1;
    int temp = 0;
    while (s <= e){
        if(a[s] == 0 && a[e] == 0){
            e--;
            continue;
        }
        if(a[s] == 0){
           temp = a[s];
           a[s] = a[e];
           a[e] = temp;
           e--;
        }
        s++;
    }
    return a;
}
// Another approch 
void myfun2(vector<int>& a){
    int insertPos = 0;

    // move non-zero elements forward
    for(size_t i=0; i < a.size(); i++){
        if(a[i] != 0){
            a[insertPos] = a[i];
            insertPos++;
        }
    }

    //fill remaining position with 0
    while (insertPos < a.size()){
        a[insertPos] = 0;
        insertPos++;
    }
}

int main(){
    vector<int> arr = {0, 1, 0, 3, 12, 0, 0};
    myfun2(arr);
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}