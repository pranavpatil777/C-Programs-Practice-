// 🔥 Challenge #3
// ❗ Problem:

// Implement:
// size_t my_strlen(const char *s);

// 🔹 Strict Requirements:
// ❌ No array indexing (s[i])
// ❌ No library functions
// ✔ Pointer traversal only
// ✔ Clean, minimal, efficient
#include <stdio.h>

size_t my_strlen(const char* s){
     if (s == NULL)
       return 0;
     
     const char* start = s;
     while (*s)
        s++;

     return s - start;
}

int main(){
    char arr[] = "hello";
    char* arr1 = NULL;
    printf("Size of the array : %zu\n", my_strlen(arr1));
    return 0;
}