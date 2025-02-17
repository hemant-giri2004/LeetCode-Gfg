class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        // //brute force. O(n^3)
        // int maxPro=INT_MIN;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int pro=1;
        //         for(int k=i;k<=j;k++){
        //             pro*=nums[k];
        //         }
        //         maxPro=max(maxPro,pro);
        //     }
        // }
        // return maxPro;

        // //brute force.  O(n^2)
        // int maxPro=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int curPro=1;
        //     for(int j=i;j<n;j++){
        //         if(curPro==0)   curPro=1;
        //         curPro*=nums[j];
        //         maxPro=max(curPro,maxPro);
        //     }
        // }
        // return maxPro;

        //obesrvation based - optimal
        /*  there are three situation.
            i.  if all are positive.-> in this case all array is ans.
            ii. if negative are even.-> in this case all array is ans.
            iii.if negative are odd
                ->in this case ans can be suffix of negative element.
                -> or we can say prefix of negative element is the ans.
            
            NOTE:If array contain 0 then you need to initalize the 
                suffix and prefix is 0
                because whole subarray before 0 make the entire product 0 
                you need to start sub array with next index.
        */
        int maxPro=INT_MIN;
        int suffix=1,prefix=1;
        for(int i=0;i<n;i++){
            if(suffix==0)   suffix=1;
            if(prefix==0)   prefix=1;
            prefix*=nums[i];
            suffix*=nums[n-1-i];
            maxPro=max(maxPro,max(suffix,prefix));
        }
        return maxPro;
    }
};