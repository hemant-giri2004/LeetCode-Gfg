class Solution {
public:
    string getSortedString(int n){
        string s=to_string(n);
        sort(s.begin(),s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s=getSortedString(n);

        //check all 2 powers and see if it matches with s
        //2^29
        for(int p=0; p<=29 ;p++){
            if(s==getSortedString(1<<p))
                return true;
        }
        return false;
    }
};