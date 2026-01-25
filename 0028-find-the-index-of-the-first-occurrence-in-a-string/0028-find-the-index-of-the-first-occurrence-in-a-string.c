int strStr(char* haystack, char* needle) {
    int i = 0, j = 0;
    while (haystack[i] != '\0') {
        while (haystack[i+j] == needle[j] && needle[j] != '\0') {
            j++;
        }
        if (needle[j] == '\0') {
            return i;
        }
        i++;
        j = 0;   
    }
    return -1;
}
