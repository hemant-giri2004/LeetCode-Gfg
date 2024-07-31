
bool isPalindrome(char* s) {
    int len;
    for(len=0;s[len]!='\0';len++);
    char arr[len+1];
    int i,j=0;
    for(i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z'){
            arr[j]=s[i]+32;j++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            arr[j]=s[i];j++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            arr[j]=s[i];j++;
        }
    }
    arr[j]='\0';
    i=0,j=j-1;
    while(i<=j){
        if(arr[i]!=arr[j])
            return false;
        i++,j--;
    }
    return true;
}