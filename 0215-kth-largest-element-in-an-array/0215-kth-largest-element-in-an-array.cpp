class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Using Max heap.
        // priority_queue<int> pq(nums.begin(),nums.end());
        // int ans;
        // while(k--){
        //     ans=pq.top();
        //     pq.pop();
        // }
        // return ans;
        //using Min heap.
        priority_queue<int ,vector<int>,greater<int>> pq;
        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};