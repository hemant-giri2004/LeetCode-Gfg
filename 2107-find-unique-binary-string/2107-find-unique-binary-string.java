class Solution {
    public String findDifferentBinaryString(String[] nums) {
       StringBuilder rs = new StringBuilder();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i].charAt(i) == '0') {
                rs.append('1');
            } else {
                rs.append('0');
            }
        }
        return rs.toString();
        // bhai apni email id log out mar diya kar lab me open karne ke bad 
        //abhi to maine mar di hai age se yad rakhna
    }
}
