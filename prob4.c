// 🔥 Challenge #4: Custom strcpy (Danger Zone)
// ❗ Problem:

// Implement:

// char* my_strcpy(char *dest, const char *src);
// 🔹 Requirements:
// Copy string from src → dest
// Include '\0'
// Return dest
// Use pointer only
// No indexing

// ⚠️ Hidden Trap:

// What if:

// dest < src   OR   dest > src

// 👉 Overlapping memory → bug
#include <stdio.h>

char* my_strcpy(char *dest, const char* src){
    char* original = dest; 
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return original;
}

int main(){
    char arr1[20] = "pranav Patil";
    char arr2[20];
    my_strcpy(arr2 , arr1);
    printf("%s", arr2);
    return 0;
}