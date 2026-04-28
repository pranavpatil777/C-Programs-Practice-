#include <iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;
    for(size_t i = 2; i <= n; i++){
        if(n % i == 0)
           count++;
    }
    if(count > 2){
       return 0;
    }else{
        return 1;
    }
}

void printing_pairs(int arr[], int n){
    for(size_t i = 0; i < n; i++){
       int x = arr[i];
       for(size_t j = i+1; j < n; j++){
          int y = arr[j];
          if(isPrime(x+y)){
            cout << "(" << x << "," << y << ")" << endl;
          }
       }
       cout << endl;
    }
}

int main(){
    int arr[10] = {1, 2,3 ,4 ,5, 6,7,8,9,10};
    int n = sizeof(arr)/ sizeof(n);
    printing_pairs(arr, n);
    return 0;
}