int firstUniqChar(char* s) {
    int count[26]={0},i;
    for(i=0;s[i]!='\0';i++)
        if(s[i]>='a')
        count[(int)(s[i]-'a')]++;
    for(i=0;s[i]!='\0';i++)
        if(count[s[i]-'a']==1)
            return i;
    return -1;
}