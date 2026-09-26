func lengthOfLongestSubstring(s string) int {
    var low, high, result int

    mp := make(map[byte]int)

    for high = 0; high < len(s); high++ {
        mp[s[high]]++

        for len(mp) < high-low+1 {
            mp[s[low]]--

            if mp[s[low]] == 0 {
                delete(mp, s[low])
            }

            low++
        }

        result = max(high-low+1, result)
    }

    return result
}