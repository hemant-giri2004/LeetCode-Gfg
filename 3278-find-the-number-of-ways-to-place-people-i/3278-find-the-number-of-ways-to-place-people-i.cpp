class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            // find A- Upper point
            int x1 = points[i][0];
            int y1 = points[i][1];

            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                // find B- Lower point
                int x2 = points[j][0];
                int y2 = points[j][1];

                if (x1 <= x2 && y1 >= y2) {
                    // for checking no poitn exists in between these points
                    bool hasPointInside = false;
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) {
                            continue;
                        }

                        int x3 = points[k][0];
                        int y3 = points[k][1];

                        if (x3 >= x1 && x3 <= x2 && y3 <= y1 && y3 >= y2) {
                            hasPointInside = true;
                            break;
                        }
                    }

                    if (!hasPointInside) {
                        result++;
                    }
                }
            }
        }
        return result;
    }
};