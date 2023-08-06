#include <stdio.h>

int main(){
            
            //Pointer of old allocated memory, new size of allocated memory
    // void realloc*(void *ptr, size_t newSize)
        // chnage size of memory block without losing data
    
    // int example
        int *ptr = (int *)malloc(sizeof(int)); // first allocation of memmory

        ptr = (int *)realloc(ptr, 2*sizeof(int)); // realloc with memory space for one more int
    
    //data loss only when the new size is smaller than the old size
    //new memory blocks are not initilised

    //When memory allocation fails it returns NULL
        //like when there is no memory available or sufficient memory

return 0;}