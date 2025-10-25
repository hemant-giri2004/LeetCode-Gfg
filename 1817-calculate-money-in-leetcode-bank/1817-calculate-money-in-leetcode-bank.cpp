class Solution {
public:
    int totalMoney(int n) {
        int amt=0;
        int w=0;
        for(int i=0;i<n;){
            int d=1;
            while(i<n && d<=7){
                amt+=(w+d);
                d++;
                i++;
            }
            w++;
        }
        return amt;
    }
};