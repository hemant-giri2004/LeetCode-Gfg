class Solution {
public:
    int bs(vector<int>& potions,int& val,long long success){
        int start=0;
        int end=potions.size()-1;
        int ans=-1;
        int mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(success <= (long long)val*potions[mid]){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int> ans; 
        //time (n*n)
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<m;j++){
        //         if(success <= (long long)spells[i]*potions[j]){
        //            count++;
        //         }
        //     }
        //     ans[i]=count;
        // }
        
        // optimize
        sort(potions.begin(),potions.end());
        for(int val:spells){
            int firstPos=bs(potions,val,success);
            (firstPos==-1)?ans.push_back(0):ans.push_back(m-firstPos);

        }

        return ans;
    }
};