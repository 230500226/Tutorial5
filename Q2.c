#include <stdio.h>
#include <stdlib.h>
#include <time.h>
                                                //The backslash to continue defining the macro on the next line
#define FAILURE_PROBABILITY(T1, T2, T3, T4, T5) \
(((T1 < 50) + (T2 < 50) + (T3 < 50) + (T4 < 50) + (T5 < 50)) / 5.0)
//n(A) (gets 1 or 0, pass or fail of all tests)             // n(S) over the sample size
int main(){

    srand(time(0));
    int T[5];

    for (int i = 0; i < 5; i++) {
        T[i] = rand() %101;
    };

    for (int i = 0; i < 5; i++) {
        printf("T%d is %d%%\n", i, T[i]);
    }

    printf("The probability of failure is %.2f%%\n", FAILURE_PROBABILITY(T[0], T[1], T[2], T[3], T[4])*100);

return 0;}