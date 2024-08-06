char* addStrings(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLength = (len1 > len2 ? len1 : len2) + 1;
    char* result = (char*)malloc((maxLength + 1) * sizeof(char));
    int carry = 0;
    int i = 0;
    while (len1 > 0 || len2 > 0 || carry > 0) {
        int x = (len1 > 0) ? num1[--len1] - '0' : 0;
        int y = (len2 > 0) ? num2[--len2] - '0' : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        result[i++] = (sum % 10) + '0';
    }
    result[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }
    return result;
}