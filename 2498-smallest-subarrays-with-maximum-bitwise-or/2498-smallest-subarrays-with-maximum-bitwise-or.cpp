class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        vector<int> setBit(32, -1);

        // read num from right to left;
        for (int i = n - 1; i >= 0; i--) {
            int endIndex = i;
            // check binary representation.
            for (int j = 0; j < 32; j++) {
                if (!(nums[i] & (1 << j))) { // if jth bit is not set
                    if (setBit[j] != -1)
                        endIndex = max(setBit[j], endIndex);
                } else {
                    setBit[j] = i;
                }
            }
            result[i] = endIndex - i + 1;
        }

        return result;
    }
};