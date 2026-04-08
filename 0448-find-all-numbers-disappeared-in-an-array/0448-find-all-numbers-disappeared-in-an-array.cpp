class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // here we use classis array marking technique.
        //we mark the index with (-) so that we no with no present.
        for(int i=0;i<nums.size();i++){
            int n=abs(nums[i]); //take absulute value.
            int idx=n-1;        //convert value into index.
            nums[idx]=-abs(nums[idx]);  //mark index with (-).
        }

        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){      //if not mark collect not present.
                ans.push_back(i+1);  //convert index into number.
            }
        }
        return ans;
    }
};