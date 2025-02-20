class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)    return a;
        int sum_without_carry=a^b;
        int carry=(a&b)<<1; //find carry and place it right postion
        return getSum(sum_without_carry,carry);
    }
};