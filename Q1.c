#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char name[100], *description;
    strcpy(name, "John Doe");

    description = malloc(30 * sizeof(char));

    if(description == NULL){
        fprintf(stderr, "Error - memory allocation failed");
    } else {
        strcpy(description, "This is description");
    }

    description = realloc(description, 100 * sizeof(char));

    if(description == NULL){
        fprintf(stderr, "Error -memory allocation failed 2");
    }
    else{
        strcat(description, "This is description 2");
    }

    printf("Name: %s\n", description);
    printf("Description: %s\n", description);

    free(description);

return 0;}