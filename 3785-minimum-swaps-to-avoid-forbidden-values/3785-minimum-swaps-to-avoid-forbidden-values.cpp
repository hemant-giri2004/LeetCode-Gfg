class Solution {
public:
    int minSwaps(vector<int>& nums, vector<int>& forbidden) {
        unordered_map<int, int> mp1, mp2, mp3;
        int n = nums.size();
        int diff = 0;
        for (int i = 0; i < n; i++) {
            mp1[nums[i]]++;
            mp2[forbidden[i]]++;
            if (nums[i] == forbidden[i]) {
               diff++;
                mp3[nums[i]]++;
            }
        }
        if (diff == 0) {
            return 0;
        }
        for (auto i : mp1) {
            int n1 = n - mp2[i.first];
            if (i.second > n1) {
                return -1;
            }
        }

        int maxFreq = INT_MIN;
        for (auto i : mp3) {
            maxFreq = max(maxFreq, i.second);
        }

        return max((diff + 1) / 2, maxFreq);
    }
};