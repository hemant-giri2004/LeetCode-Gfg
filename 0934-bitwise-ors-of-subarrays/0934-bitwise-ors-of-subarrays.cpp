class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n= arr.size();
        //It gives Tle
        // unordered_set<int> st;
        // for(int i=0;i<n;i++){
        //     int curOr=0;
        //     for(int j=i;j<n;j++){
        //         st.insert(arr[j]);
        //         curOr |= arr[j];
        //         st.insert(curOr);
        //     }
        // }
        // return st.size();

        unordered_set<int> prev,curr,result;
        for(int i=0; i<n ; i++){
            for(auto n :prev){
                curr.insert(arr[i]|n);
                result.insert(arr[i]|n);
            }
            curr.insert(arr[i]);
            result.insert(arr[i]);
            prev=curr;
            curr.clear();
        }
        return result.size();
    }
};