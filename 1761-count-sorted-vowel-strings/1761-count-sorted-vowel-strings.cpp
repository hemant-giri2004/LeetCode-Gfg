class Solution {
public:
long long nCr(int n, int r) {
    if (r > n) return 0;
    long long result = 1;
    r = min(r, n - r);  // Use property nCr = nC(n-r) for efficiency
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

    int countVowelStrings(int n) {
        return nCr(n+4,4);
    }
};