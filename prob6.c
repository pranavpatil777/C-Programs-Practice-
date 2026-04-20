// 🔥 Challenge #6: Implement your own malloc (Mini Version)
// ❗ Problem:

// Build a simple memory allocator

// 🔹 Goal:

// Implement:

// void* my_malloc(size_t size);
// 🔹 Constraints:
// Use sbrk() (or simulate using array)
// Maintain a free list
// Return pointer to usable memory

#include <stdio.h>

static char heap[1024];
static char* ptr = heap; //pointer points to end of the heap 

void* my_malloc(size_t size){
    if(ptr + size > heap + sizeof(heap)){
        return NULL;
    }
    char* s_ptr = ptr;
    ptr += size;
    return s_ptr;
}

int main(){
    printf("%p\n", heap);
    void* p1 = my_malloc(10);
    void* p2 = my_malloc(20);
    printf("%p\n", p1);
    printf("%p\n", p2);
    return 0;
}