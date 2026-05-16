/*
What is an Iterator?
Iterator is like:
a smart pointer used to traverse containers

Think:
vector:
[10][20][30][40]
Iterator points to elements one by one.

Syntax
vector<int>::iterator it;

Example:

vector<int> v = {10,20,30};
vector<int>::iterator it = v.begin();

Now:
it

points to:
10

Dereference Operator

To get value:
cout << *it;

Output:
10

Because:
it
stores address/reference to element.

*it means:

value at iterator
Exactly like pointers.

Move Iterator
it++;

Now iterator points to:

20
*/
#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector<int> v = {10, 20, 30, 40};
    
    auto it = v.begin();
    //👆 is equivalent to 👇:
    // vector<int>::iterator it = v.begin();
    cout << *it << endl;

    it++;
    cout << *it << endl;
    return 0;
}