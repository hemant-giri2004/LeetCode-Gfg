class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();

        vector<int> pos(n);       // already sorted.
        vector<int> prefixSum(n); // fruits prefix Sum

        for (int i = 0; i < n; i++) {
            pos[i] = fruits[i][0];
            prefixSum[i] = fruits[i][1] + (i > 0 ? prefixSum[i - 1] : 0);
        }

        int maxFruits = 0;

        for (int d = 0; d <= k / 2; d++) {
            // case 1 : moved d step to left.
            int remain = k - 2 * d;
            int i = startPos - d;
            int j = startPos + remain;

            int left = lower_bound(begin(pos), end(pos), i) - begin(pos);
            int right = upper_bound(begin(pos), end(pos), j) - begin(pos) - 1;

            if (left <= right) {
                int total =
                    prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
                maxFruits = max(maxFruits, total);
            }

            // case 2 : moved d step to right.
            //  remain =k-2*d;
            i = startPos - remain;
            j = startPos + d;

            left = lower_bound(begin(pos), end(pos), i) - begin(pos);
            right = upper_bound(begin(pos), end(pos), j) - begin(pos) - 1;

            if (left <= right) {
                int total =
                    prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
                maxFruits = max(maxFruits, total);
            }
        }

        return maxFruits;
    }
};