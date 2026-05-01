#include <iostream>
using namespace std;

// You are given an array:
// arr = [3, 1, 4, 1, 5, 9, 2]

// Task:
// Answer the following queries using prefix sum:

// Sum from index 0 to 3
// Sum from index 2 to 5
// Sum from index 1 to 6
int* calculate_prefix(int arr[], int n){
    int* prefix = new int[n];
    prefix[0] = arr[0];
    
    for (int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

int prefix_sum(int prefix[], int left, int right)
{
    if (left == 0)
        return prefix[right];
    else
        return prefix[right] - prefix[left - 1];
}

int main()
{
    int arr[] = {2, -1, 3, -2, 4, -5, 6};
    int n = sizeof(arr) / sizeof(int);
    int right = 0;
    int left = 0;
    int* arr1 = calculate_prefix(arr, n);
    while (1)
    {
        cout << endl;
        cout << "Enter the value of left : ";
        cin >> left;
        cout << "Enter the value of right : ";
        cin >> right;
        if(left >= 0 && right < n)
          cout << "The Sum From [" << left << "] to [" << right <<"] = " << prefix_sum(arr1, left, right);  
    }

    return 0;
}