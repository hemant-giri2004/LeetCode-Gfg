class Solution {
public:
    int child1Collect(vector<vector<int>>& fruits, int& n) {
        int cnt = 0;
        // collect only diagnal fruits due to n-1 operations.
        for (int i = 0; i < n; i++) {
            cnt += fruits[i][i];
            fruits[i][i] = 0;
        }
        return cnt;
    }

    int child2Collect(vector<vector<int>>& dp2, vector<vector<int>>& fruits, int& n, int i, int j) {
        if (i >= n || j >= n || j < 0) // for outof bound.
            return 0;
        if (i == n - 1 && j == n - 1) // for destination.
            return 0;
        if (i >= j) // only for finding in bellow the diagnal.
            return 0;
        if(dp2[i][j]!=-1)   
            return dp2[i][j];

        // c2 have 3 option : bottom, bottom left, bottom right.
        int bottom = fruits[i][j] + child2Collect(dp2,fruits, n, i + 1, j);
        int bottomLeft = fruits[i][j] + child2Collect(dp2,fruits, n, i + 1, j - 1);
        int bottomRight = fruits[i][j] + child2Collect(dp2,fruits, n, i + 1, j + 1);

        return dp2[i][j]=max(bottom, max(bottomLeft, bottomRight));
    }

    int child3Collect(vector<vector<int>>& dp2, vector<vector<int>>& fruits, int& n, int i, int j) {
        if (i >= n || j >= n || i < 0) // for outof bound.
            return 0;
        if (i == n - 1 && j == n - 1) // for destination.
            return 0;
        if (i <= j) // only for finding in bellow the diagnal.
            return 0;
        
        if(dp2[i][j]!=-1)   
            return dp2[i][j];

        // c3 have 3 option : right, right up, right down.
        int right = fruits[i][j] + child3Collect(dp2,fruits, n, i, j + 1);
        int rightUp = fruits[i][j] + child3Collect(dp2,fruits, n, i - 1, j + 1);
        int rightDown = fruits[i][j] + child3Collect(dp2,fruits, n, i + 1, j + 1);

        return dp2[i][j]=max(right, max(rightUp, rightDown));
    }

    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n = fruits.size();
        vector<vector<int>> dp2(n, vector<int>(n, -1));
        int c1 = child1Collect(fruits, n);           // start from 0,0 index.
        int c2 = child2Collect(dp2,fruits, n, 0, n - 1); // start index of c2 : i,j.
        int c3 = child3Collect(dp2,fruits, n, n - 1, 0); // start index of c3 : i,j.
        // cout<<c1<<c2<<c3;
        return c1 + c2 + c3;
    }
};