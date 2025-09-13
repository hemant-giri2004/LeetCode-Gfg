class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        if(s.length()==0)
            return 0;
        unordered_map<char,int> vowelFreq,consonantFreq;

        for(auto &ch:s){
            if(isVowel(ch)){
                vowelFreq[ch]++;
            }
            else{
                consonantFreq[ch]++;
            }
        }

        int maxFreqOfVowel=0;
        for(auto p:vowelFreq){
            maxFreqOfVowel=max(maxFreqOfVowel,p.second);
        }
        int maxfreqOfConsonant=0;
        for(auto p:consonantFreq){
            maxfreqOfConsonant=max(maxfreqOfConsonant,p.second);
        }
        return maxFreqOfVowel+maxfreqOfConsonant;
    }
};