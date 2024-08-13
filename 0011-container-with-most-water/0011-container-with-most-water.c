int maxArea(int* height, int heightSize) {
    int l = 0, r = heightSize - 1, sum = 0, water = 0, min = 0;
    while (l < r) {
        min = (height[l] < height[r]) ? height[l] : height[r];
        water = (r - l) * min;
        if (sum < water)
            sum = water;
        if (height[l] >= height[r])
            r--;
        else
            l++;
    }
    return sum;
}