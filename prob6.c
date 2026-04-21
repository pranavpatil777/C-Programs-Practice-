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

// My current challenge 🎯 
// 1) add padding to memory
// 2) add metadata 

#include <stdio.h>

static char heap[1024];
static char* ptr = heap; //pointer points to end of the heap 

struct block{
    struct block* next;
    size_t size;
    int free;
};

void* my_malloc(size_t size){
    size = (size + 7) & ~7;
    if(ptr + sizeof(struct block) + size > heap + sizeof(heap)){
        return NULL;
    }
    struct block* ptr1 = (struct block*)ptr;
    ptr1 -> size = size;
    ptr1 -> free = 0;
    void* s_ptr = ptr + (sizeof(struct block));
    ptr += sizeof(struct block) + size;
    ptr1 -> next = NULL;
    return s_ptr;
}

int main(){
    void* p1 = my_malloc(10);
    void* p2 = my_malloc(20);
    printf("%p\n", p1);
    printf("%p\n", p2);
    return 0;
}
