/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int c = 1;
    int n = digitsSize;
    while (--n>=0) {
        digits[n] = digits[n] + c;
        if (digits[n] > 9) {
            c = digits[n] / 10;
            digits[n] %= 10;
        } else {
            c=0;
            break;
        }
    }
    if(c){
        int *result=(int *)malloc((digitsSize+1)*sizeof(int));
        result[0]=c;
        for(int i=0;i<digitsSize;i++)
            result[i+1]=digits[i];
        *returnSize=digitsSize+1;
        return result;
    }
    else{
        *returnSize=digitsSize;
        return digits;
    }
}