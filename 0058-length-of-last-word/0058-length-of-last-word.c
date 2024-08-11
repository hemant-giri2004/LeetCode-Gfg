int lengthOfLastWord(char* s) {
    int len=0,cnt=0,i=0;
    while(s[i]){
        if(s[i]==' '){
            len=cnt;
            while(s[i+1]!='\0' && s[i+1]==' ')
                i++;
            cnt=0;
        }
        else
            cnt++;
        i++;
    }
    return (cnt)?cnt:len;
}