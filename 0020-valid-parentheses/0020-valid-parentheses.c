bool isValid(char* s) {
    int len = strlen(s);
    char stack[len + 1]; 
    int top = -1;

    for (int i = 0; s[i]; i++) {
        char c = s[i];

        // Check if opening bracket
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else if (top != -1) {
            // Check for matching closing bracket
            char expected = c == ')' ? '(' : (c == '}' ? '{' : '[');
            if (stack[top] != expected) {
                return false;
            }
            top--;
        } else {
            // Extra closing bracket or invalid character
            return false;
        }
    }

    return top == -1;
}