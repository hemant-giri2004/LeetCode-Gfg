int sumSqDigit(n){
    int sum = 0;
    while (n) {
        sum += ((n % 10) * (n % 10));
        n = n / 10;
    }
    return sum;
}
bool isHappy(int n) {
    int slow=n,fast=sumSqDigit(n);
    while(slow!=1 && fast !=1){
        slow=sumSqDigit(slow);
        fast=sumSqDigit(sumSqDigit(fast));
        if(fast==slow)
            return false;
    }
    return true;
}