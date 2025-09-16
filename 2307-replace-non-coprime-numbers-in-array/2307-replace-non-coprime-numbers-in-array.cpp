class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> result; //we cam use stack also.

        //process left to right
        for(int num: nums){
        
            while(!result.empty()){
                int prev=result.back();
                int curr=num;

                int GCD=gcd(prev,curr);
                if(GCD==1){
                    break;
                }
                result.pop_back();
                int LCM=prev/GCD * curr;
                num=LCM;
            }
            result.push_back(num);
        }
        
        return result;
    }
};