class Solution {
public:
    bool isVowel(char ch){
        if(ch=='A'||ch=='E'||ch=='I'||ch=='U'||ch=='O'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    string sortVowels(string s) {
        // int cntA = 0, cntE = 0, cntI = 0, cntO = 0, cntU = 0;
        // int cnta = 0, cnte = 0, cnti = 0, cnto = 0, cntu = 0;
        // for (char ch : s) {
        //     switch (ch) {
        //     case 'A':
        //         cntA++;
        //         break;
        //     case 'E':
        //         cntE++;
        //         break;
        //     case 'I':
        //         cntI++;
        //         break;
        //     case 'O':
        //         cntO++;
        //         break;
        //     case 'U':
        //         cntU++;
        //         break;
        //     case 'a':
        //         cnta++;
        //         break;
        //     case 'e':
        //         cnte++;
        //         break;
        //     case 'i':
        //         cnti++;
        //         break;
        //     case 'o':
        //         cnto++;
        //         break;
        //     case 'u':
        //         cntu++;
        //         break;
        //     default:
        //         continue;
        //     }
        // }

        // for (int i = 0; i < s.length(); i++) {
        //     if (isVowel(s[i])) {
        //         if (cntA > 0) {
        //             s[i] = 'A';
        //             cntA--;
        //         } else if (cntE > 0) {
        //             s[i] = 'E';
        //             cntE--;
        //         } else if (cntI > 0) {
        //             s[i] = 'I';
        //             cntI--;
        //         } else if (cntO > 0) {
        //             s[i] = 'O';
        //             cntO--;
        //         } else if (cntU > 0) {
        //             s[i] = 'U';
        //             cntU--;
        //         } else if (cnta > 0) {
        //             s[i] = 'a';
        //             cnta--;
        //         } else if (cnte > 0) {
        //             s[i] = 'e';
        //             cnte--;
        //         } else if (cnti > 0) {
        //             s[i] = 'i';
        //             cnti--;
        //         } else if (cnto > 0) {
        //             s[i] = 'o';
        //             cnto--;
        //         } else if (cntu > 0) {
        //             s[i] = 'u';
        //             cntu--;
        //         } else {
        //             continue;
        //         }
        //     }
        // }
        // return s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                mp[s[i]]++;
            }
        }
        int j=0;
        string currentVowel="AEIOUaeiou";
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                while(mp[currentVowel[j]]==0)
                    j++;
                s[i]=currentVowel[j];
                mp[currentVowel[j]]--;
            }
        }
        return s;
    }
};