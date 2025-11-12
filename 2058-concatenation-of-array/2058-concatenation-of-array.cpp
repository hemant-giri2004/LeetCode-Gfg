class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i = 1; i <= 2; i++) {
            for (auto n : nums) {
                ans.push_back(n);
            }
        }
        return ans;
    }
};