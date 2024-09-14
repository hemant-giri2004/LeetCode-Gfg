class Solution {
public:
    void merge(vector<int>&v,vector<int>& t,int st,int m,int en){
        int i=st,j=m+1,k=st;
        while(i<=m && j<=en){
            if(v[i]<v[j])
                t[k++]=v[i++];
            else
                t[k++]=v[j++];
        }
        while(i<=m){
            t[k++]=v[i++];
        }
        while(j<=en){
            t[k++]=v[j++];
        }
        //copy in orignal vector
        for(int i=st;i<=en;i++){
            v[i]=t[i];
        }
    }
    void mergeSort(vector<int>&v,vector<int>& t,int st,int en){
        if(st>=en)   return;
        int m=st+(en-st)/2;
        //divide
        mergeSort(v,t,st,m);
        mergeSort(v,t,m+1,en);
        //conquer
        merge(v,t,st,m,en);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int > temp(nums.size(),-1);
        mergeSort(nums,temp,0,nums.size()-1);
        return nums;
    }
};