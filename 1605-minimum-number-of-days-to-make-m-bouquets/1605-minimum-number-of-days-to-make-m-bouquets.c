bool canMakeBouquets(int* bloomDay, int bloomDaySize, int m, int k, int day) {
    int bouquets = 0, flowers = 0;
    for (int i = 0; i < bloomDaySize; i++) {
        if (bloomDay[i] <= day) {
            flowers++;
            if (flowers == k) {
                bouquets++;
                flowers = 0;
                if (bouquets == m) return true;
            }
        } else {
            flowers = 0;
        }
    }
    return bouquets >= m;
}

// Function to find the minimum number of days required
int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    // Check if it's possible to make m bouquets
    if ((long long)m * k > bloomDaySize) return -1;

    int left = INT_MAX, right = INT_MIN;
    for (int i = 0; i < bloomDaySize; i++) {
        if (bloomDay[i] < left) left = bloomDay[i];
        if (bloomDay[i] > right) right = bloomDay[i];
    }

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canMakeBouquets(bloomDay, bloomDaySize, m, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}