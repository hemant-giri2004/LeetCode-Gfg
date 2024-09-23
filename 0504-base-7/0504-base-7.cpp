class Solution {
public:
    string convertToBase7(int num) {
    if (num == 0) return "0";
    bool isNegative = num < 0;
    num = abs(num);
    string base7 = "";
    while (num > 0) {
        int remainder = num % 7;
        base7 = to_string(remainder) + base7; 
        num /= 7;
    }
    if (isNegative) base7 = "-" + base7;  // Add the negative sign if needed
    return base7;
    }
};