/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<string.h>

char** fizzBuzz(int n, int* returnSize) {
    char **answer=NULL;
    *returnSize=n;
    answer=(char **)malloc(n*sizeof(char*));
    for(int i=1;i<=n;i++){
        answer[i-1]=(char *)malloc(9*sizeof(char));
        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(answer[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(answer[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            strcpy(answer[i - 1], "Buzz");
        } else {
            sprintf(answer[i - 1], "%d", i);
        }
    }
    return answer; 
}