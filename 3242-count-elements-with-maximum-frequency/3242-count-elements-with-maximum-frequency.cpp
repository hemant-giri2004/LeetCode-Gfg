class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freqMap;
    
    // Count the frequency of each element
    for (int num : nums) {
        freqMap[num]++;
    }
    
    // Find the maximum frequency
    int maxFreq = 0;
    for (auto& entry : freqMap) {
        maxFreq = max(maxFreq, entry.second);
    }

    // Count the occurrences of elements having max frequency
    int totalCount = 0;
    for (auto& entry : freqMap) {
        if (entry.second == maxFreq) {
            totalCount += entry.second;
        }
    }
    
    return totalCount;
    }
};