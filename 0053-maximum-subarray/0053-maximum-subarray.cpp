class Solution {
public:
int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // //brute force. 
        // //time complexcity O(n^3)
        // int maxSum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int curSum=0;
        //         for(int k=i;k<=j;k++){
        //             curSum+=nums[k];
        //             maxSum=max(curSum,maxSum);  //update sum for every sub array.
        //         }
        //     }
        // }
        // return maxSum; 

        
        // //time complexcity O(n^2)
        // //make sure you initailize with int min beacuse negative value exits.
        // int maxSum=INT_MIN;   
        // for(int i=0;i<n;i++){
        //     int curSum=0;
        //     for(int j=i;j<n;j++){
        //         curSum+=nums[j];
        //         maxSum=max(curSum,maxSum);  //update sum for every sub array.
        //     }
        // }
        // return maxSum; 

        //kadane algorithm.
        int sum=0,maxSum=INT_MIN;
        for(auto n:nums){
            sum+=n;
            if(sum>maxSum)
                maxSum=sum;
            if(sum<0)
                sum=0;
        }
        return maxSum;
    }
};