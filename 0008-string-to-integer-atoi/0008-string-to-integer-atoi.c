int myAtoi(char* s) {
    long num = 0;
    int sign = 1, b = 1, i = 0;
    while (s[i] == ' ')
        i++;
    if(s[i]=='+'||s[i]=='-'){
        if(s[i]=='-')
            sign=-1;
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9'){

        
        num = num * 10 + (int)(s[i] - '0');
        if (num > INT_MAX) 
             return (sign == 1) ? INT_MAX : INT_MIN;
        i++;
    }
        return (int)(sign*num);
}
