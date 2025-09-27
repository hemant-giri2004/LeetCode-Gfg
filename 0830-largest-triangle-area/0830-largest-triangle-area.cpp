class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double maxArea=0.0;
        for(int i=0;i<n-2;i++){ //(x1,y1)
            for(int j=i+1;j<n-1;j++){   //(x2,y2)
                for(int k=j+1;k<n;k++){     //(x3,y3)
                    int x1=points[i][0];
                    int y1=points[i][1];
                    int x2=points[j][0];
                    int y2=points[j][1];
                    int x3=points[k][0];
                    int y3=points[k][1];

                    double shoelace= 0.5 * abs(x1*(y2-y3) + x2 * (y3-y1) + x3 * (y1-y2));
                    maxArea=max(maxArea,shoelace);
                }

            }
        }
        return maxArea;
    }
};