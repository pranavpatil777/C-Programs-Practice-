/*
First Topic: pair

A pair stores two values together.

Example:

pair<int, int> p;

This means:

(first value, second value)

Example:

pair<int, int> p = {10, 20};

cout << p.first;   // 10
cout << p.second;  // 20
Why pair Exists

Suppose you want:

coordinates (x, y)
(value, index)
(student_id, marks)

Instead of creating two arrays:

int value[100];
int index[100];

You can combine them:

pair<int,int>

Very common in DSA.
*/

#include <iostream>
#include <utility>
using namespace std;

int main()
{

    pair<int, int> p;

    p.first = 50;
    p.second = 3;

    cout << p.first << " ";
    cout << p.second << endl;

    pair<int, int> arr[3];

    arr[0] = {1, 10};
    arr[1] = {2, 20};
    arr[2] = {3, 30};

    for(auto x : arr){
        cout << "[" << x.first << " " << x.second << "]";
    }
    cout <<endl;
    pair<int, int> a = {2, 5};
    pair<int, int> b = {2, 8};
     
    cout << (a < b) << endl;
    return 0;
}