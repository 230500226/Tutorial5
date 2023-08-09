#include <stdio.h>

// Assuming that the elements reffered to is from the previous question 
// These elements come from a smaple of the Q2 array.
float testResults[5] = {18,42,41,65,65};

int main(){

    FILE *LogTestResults;

    LogTestResults = fopen("./LogTestResults.txt", "wt");

    fprintf(LogTestResults, "Hello, here are the test results :\n");
    
    for (int i=0; i<5; i++){
        fprintf(LogTestResults, "%d: %.2f%%\n", i, testResults[i]);
    }

    float maxResult = testResults[0];
    float minResult = testResults[0];

        for (int i=1; i<5; i++){
            if (testResults[i] > maxResult){
                maxResult = testResults[i];
            }
            if (testResults[i] < minResult){
                minResult = testResults[i];
            }
        }

        float product = (maxResult/100) * (minResult/100);

    fprintf(LogTestResults, "The maximum result is: %.2f%%\n", maxResult);
    fprintf(LogTestResults, "The minimum result is: %.2f%%\n", minResult);
    fprintf(LogTestResults, "The product of the maximum and minimum results is: %.2f%%\n", product);

    fclose(LogTestResults);

return 0;}