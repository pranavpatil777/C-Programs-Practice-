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

// 🔥 Challenge #7: Reuse Freed Memory
// Goal: Before allocating new memory:
// 👉 Search existing blocks

#include <stdio.h>


static char heap[1024];
static char* ptr = heap; //pointer points to end of the heap 

struct block{
    size_t size;
    int free;
};

void* traverse_heap(size_t size){
    struct block* block = (struct block*)heap;
    while ((char*)block < ptr){
       if(block->free == 1 && block->size >= size){
           block->free = 0; //we are using the block now

           return (char*)block + sizeof(struct block);
       }
       //Traversel
       block = (struct block*)((char*)block + sizeof(struct block) + block->size);
       //OR, we can do it like This 👇 
       // block = block->next;
    }
    return NULL;
}

void my_free(void* ptr_data){
    if(ptr_data == NULL) return;
    struct block* block = (struct block*)((char*)ptr_data - sizeof(struct block));
    block->free = 1;
}

void* my_malloc(size_t size){
    size = (size + 7) & ~7;
    void* temp = traverse_heap(size);
    if(temp != NULL){
        return temp;
    }
    if(ptr + sizeof(struct block) + size > heap + sizeof(heap)){
        return NULL;
    }
    struct block* ptr1 = (struct block*)ptr;
    ptr1 -> size = size;
    ptr1 -> free = 0;
    void* s_ptr = ptr + (sizeof(struct block));
    ptr += sizeof(struct block) + size;
    return s_ptr;
}

int main(){
    void* p1 = my_malloc(10);
    void* p2 = my_malloc(20);
    my_free(p1);
    p1 = NULL;
    void* p3 = my_malloc(8);
    printf("%p\n", p1);
    printf("%p\n", p2);
    return 0;
}
