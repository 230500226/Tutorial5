#include <stdio.h>

int main(){
            
            //number of blocks, size of each block
    // void calloc*(size_t n, size_t size)
        // Allocate memory of multiple blocks
    
    // int example
        int *ptr = (int *)calloc(10, sizeof(int));
    // example with malloc instead
        int *ptr2 = (int *)malloc(10 * sizeof(int));

    // When memory is allocated with calloc it is initialized to zero 0
    // When memory is allocated with malloc it is initialized to garbage value

    //When memory allocation fails it returns NULL
        //like when there is no memory available or sufficient memory

return 0;}