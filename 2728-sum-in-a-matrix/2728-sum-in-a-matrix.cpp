class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
    int score = 0;

    // Sort each row in descending order
    for (auto& row : nums) {
        sort(row.begin(), row.end(), greater<int>());
    }

    while (!nums.empty() && !nums[0].empty()) {
        int maxInRound = 0;

        // Extract the largest element from each row
        for (auto& row : nums) {
            maxInRound = max(maxInRound, row.front());
            row.erase(row.begin());
        }

        // Add the largest of these to the score
        score += maxInRound;

        // Remove empty rows if any
        nums.erase(remove_if(nums.begin(), nums.end(), [](const vector<int>& row) {
            return row.empty();
        }), nums.end());
    }

    return score;
    }
};