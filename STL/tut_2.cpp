/*
A vector is a: dynamic array

Meaning:

array behavior
contiguous memory
automatic resizing

You can keep inserting elements dynamically.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << v[0] << "\n";
    cout << v[1] << "\n";
    cout << v[2];

    cout << v.size() << endl;

    v.pop_back();
    for(int x : v){
        cout << x << " ";
    }

    cout << "\n" << v.back() << "\n";
    cout << "\n" << v.front() << "\n";

    // 2D VECTOR 
    vector<vector<int>> grid;
}