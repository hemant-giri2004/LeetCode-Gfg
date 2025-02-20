class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // //brute force
        // for(int i=0;i<n;i++){
        //     int flag=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==i){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0) return i;
        // }

        // // nlogn approach using sorting.
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i)  return i;
        // }
        // return n;

        // //using maths.
        // long s1=0;
        // for(int i=0;i<n;i++)
        //     s1+=nums[i];    //find the sum of all element.
        // long s2=n*(n+1)/2;  //find the sum of n consucetive no.
        // return s2-s1;       //return difference.

        //using bitwise.
        long sum=n;;
        for(int i=0;i<n;i++){
            sum=sum^i^nums[i];
        }
        return sum;
    }
};