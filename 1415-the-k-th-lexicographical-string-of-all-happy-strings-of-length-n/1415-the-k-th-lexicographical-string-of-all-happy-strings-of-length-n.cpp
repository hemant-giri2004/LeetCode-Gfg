class Solution {
public:
    // void solve(int n,string curr,vector<string>& result){
    //     if(curr.length()==n){
    //         result.push_back(curr);
    //         return ;
    //     }
    //     for(char ch='a';ch<='c';ch++){
    //         if(!curr.empty() && curr.back()==ch)
    //             continue;
            
    //         //do
    //         curr.push_back(ch);
    //         //explore
    //         solve(n,curr,result);
    //         //undo
    //         curr.pop_back();

    //     }
    // }
    void solve(int n,string& curr,int& cnt,int k,string& result){
        if(curr.length()==n){
            cnt++;
            if(cnt==k){
                result=curr;
            }
            return ;
        }
        for(char ch='a';ch<='c';ch++){
            if(!curr.empty() && curr.back()==ch)
                continue;
            
            //do
            curr.push_back(ch);
            //explore
            solve(n,curr,cnt,k,result);
            // If result is found, exit early
            if (!result.empty()) return;
            //undo
            curr.pop_back();

        }
    }
    string getHappyString(int n, int k) {
        string curr="";
        
        // vector<string> result;
        // solve(n,curr,result);
        // if(result.size()<k){
        //     return "";
        // }
        // return result[k-1];
        string result="";
        int cnt=0;
        solve(n,curr,cnt,k, result);
        return result;
    }
};