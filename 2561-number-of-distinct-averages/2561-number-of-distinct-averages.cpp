class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<double> avg;

        while (nums.size() >= 2) {
            int min = nums.front();
            int max = nums.back();
            nums.erase(nums.begin());  // remove the first element (minimum)
            nums.pop_back();           // remove the last element (maximum)
            
            double average = (double)(min + max) / 2;
            avg.insert(average);
        }

        return avg.size();
    }
};