class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        //simulation problem - do question says
        //because target is strictly increasing order.
        vector<string> ans;
        int j=0;    //to point target
        for(int i=1;i<=n && j!=target.size();i++){  //move in range
            if(target[j]==i){ //number is needed: push it.
                ans.push_back("Push");
                j++;
            }else if(target[j]>i){ //number is not needed.
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};