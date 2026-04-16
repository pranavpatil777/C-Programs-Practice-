// 🔥 Challenge #2: Swap Two Strings (Pointer Trap)
// ❗ Problem:

// Write a function to swap two strings:

// void swap(char **a, char **b);
// 🔹 Example:
// char *s1 = "hello";
// char *s2 = "world";

// swap(&s1, &s2);

// After swap:

// s1 → "world"
// s2 → "hello"
#include <stdio.h>

void swap(char** a, char** b){
     char* temp = *a;
     *a = *b;
     *b = temp;
}

int main(){
    char* s1 = "Hello";
    char* s2 = "world";

    printf("String Before Swapping : \n");
    printf("%s\n", s1);
    printf("%s\n", s2);

    swap(&s1, &s2);

    printf("String After Swapping : \n");
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}