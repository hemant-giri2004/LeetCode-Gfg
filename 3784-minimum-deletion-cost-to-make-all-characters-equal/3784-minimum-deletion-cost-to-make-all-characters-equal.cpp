class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
         int n = s.size();
        
        long long totalCost = 0;
        for (int c : cost) {
            totalCost += c;
        }

        // store total cost of each character
        unordered_map<char, long long> charCost;
        for (int i = 0; i < n; i++) {
            charCost[s[i]] += cost[i];
        }

        long long maxKeepCost = 0;
        for (auto &p : charCost) {
            maxKeepCost = max(maxKeepCost, p.second);
        }

        return totalCost - maxKeepCost;
    }
};