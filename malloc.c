#include <stdio.h>
#include <stdlib.h>

int main(){

    // (void* )malloc(size_t size);
        // Allocate memory block specified in the function arguments
        // This takes place in the heap memory
        // On success it reutnrs a pointer to the first byte of the allocated memory
        // On fail it returns NULL

    // Becuase it uses void*
        //we need to typecast to the appropriate type

    // int* example
                    //👇 the type cast
        //int *ptr = (int* )malloc(4);

    //  Example program
        // User defines the memory needed for storing the integer by specifing how much numbers are going to be entered
        // If user enters 1 int then 4 bytes are allocated,
        // If user enters 2 int then 4 * 2 bytes are allocated

    int n;
    printf("Enter the number of integers to be entered: ");
    scanf("%d", &n);

        int *ptr = (int *)malloc(n * sizeof(int));

        if(ptr == NULL){
            printf("Memory allocation failed.\n");
            exit(1);
        }

        for (int i=0; i<n; i++){
            printf("Enter the individual digits of the integer: ");
            scanf("%d", ptr+i);
        }

        for(int i=0; i<n; i++){
                printf("%d", *(ptr+i));
        }

return 0;}