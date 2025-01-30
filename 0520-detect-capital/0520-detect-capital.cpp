class Solution {
public:
    bool detectCapitalUse(string word) {
        if (isupper(word[0]) && all_of(word.begin(), word.end(), ::isupper)) {
        return true;
    }
    
    // Case 2: All letters are lowercase
    if (all_of(word.begin(), word.end(), ::islower)) {
        return true;
    }
    
    // Case 3: Only the first letter is uppercase, the rest are lowercase
    if (isupper(word[0]) && all_of(word.begin() + 1, word.end(), ::islower)) {
        return true;
    }

    // If none of the cases match, return false
    return false;
    }
};