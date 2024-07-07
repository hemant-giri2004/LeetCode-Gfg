class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double avg = INT_MAX;
        while (nums.size() >= 2) {
            int min = INT_MAX, max = INT_MIN;
            int minI = -1, maxI = -1;

            // Find min and max in the current vector
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < min) {
                    min = nums[i];
                    minI = i;
                }
                if (nums[i] > max) {
                    max = nums[i];
                    maxI = i;
                }
            }

            // Compute the current average
            double curravg = ((double)min + max) / 2;
            if (curravg < avg)
                avg = curravg;

            // Erase the min and max elements from the vector
            if (minI < maxI) {
                nums.erase(nums.begin() + maxI);
                nums.erase(nums.begin() + minI);
            } else {
                nums.erase(nums.begin() + minI);
                nums.erase(nums.begin() + maxI);
            }
        }
        return avg;
    }
};
