#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;

    printf("Please enter the amount of integers to sum up: ");
    scanf("%d",&n);

    int *pn = (int *)calloc(n, sizeof(int));

    printf("Please enter the individual integer to sum up: \n");

    for (int i=0; i<n; i++){
        scanf("%d",pn+i);
        printf("+");
    }

    int ans = 0;

    for (int i=0; i<n; i++){
        ans += *(pn+i);
    }

    printf("the sum of the integers is: %d\n", ans);

    free(pn);

return 0;}