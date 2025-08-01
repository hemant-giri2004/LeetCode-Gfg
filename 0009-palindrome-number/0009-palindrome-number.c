bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        // If the length of the number is odd, we can ignore the middle digit
        return x == reversed || x == reversed / 10;
}
