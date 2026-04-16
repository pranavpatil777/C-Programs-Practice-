// Problem: Reverse a string (WITHOUT library)
// ❗ Requirements:
// Do NOT use strlen, strrev, or any library
// Use pointers only (no indexing like s[i])
// Reverse in-place
// Handle:
// Empty string
// Single character
// Normal string
#include <stdio.h>

void reverse(char* s, int n){
    char* start = s;
    char* end = s + n - 1;
    char temp;
    
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
    printf("Reversed String : %s\n", s);
}

int calLenght(char* s){
    int len = 0;  
    while (*s != '\0'){
        len++;
        s++;
    }
    return len;
}

int main(){
    char str[50];
    int len = 0;
    printf("Enter a String : ");
    scanf("%49s", str);
    len = calLenght(str);
    printf("String Before : %s\n", str);
    if((len > 1)){
        reverse(str, len);
    }else{
        printf("String only has one letter\n");
    }
    return 0;
}