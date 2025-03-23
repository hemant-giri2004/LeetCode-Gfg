class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0, maxlen = 0;
        vector<int> hMap(256, -1); // Properly initialize to -1

        while (r < n) {
            if (hMap[s[r]] != -1 && hMap[s[r]] >= l) {
                l = hMap[s[r]] + 1;
            }
            maxlen = max(maxlen, r - l + 1);
            hMap[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};
