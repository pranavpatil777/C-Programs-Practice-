// 🚀 Next Challenge (Now REAL systems bug)

// We go deeper.

// 🔥 Challenge #5: Implement memmove
// ❗ Problem:
// void* my_memmove(void *dest, const void *src, size_t n);
// 🔹 Requirements:
// Works for any data (not just char)
// Must handle overlapping memory
// Return dest
// Use pointer arithmetic

#include <stdio.h>

void* my_memmove(void* dest, const void* src, size_t n){
    void* original = dest; 

    if(dest == src || n == 0)
       return dest;
    
    char* d = (char*)dest;
    const char* s = (const char*) src;

    if(d < s){ 
        while (n--){
            *d++ = *s++;
        }  
    }
    else{
        d += n;
        s += n;
        while (n--){
            *--d = *--s;
        }
    }
    return original;
}

int main(){
    char arr1[20] = "abcdef";
    my_memmove(arr1 + 2, arr1, 4);
    printf("%s\n", arr1);
    return 0;
}