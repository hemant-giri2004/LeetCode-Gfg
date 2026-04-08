class Solution {
public:
    bool isOpr(string t){
        if(t.size()==1){//  It can be single digit no also
            if(t[0]=='+'||t[0]=='-'||t[0]=='*'||t[0]=='/')//if operation 
                return true;
            else
                return false;   //handle single digit;
        }else{
            return false;  //only digits
        }
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;  //take stack to perform operation on most recent
        for(auto t:tokens){
            if(isOpr(t)){
                int a=st.top();st.pop();
                int b=st.top();st.pop();
                int ans;
                switch(t[0]){
                    case '+':ans=b+a;break;
                    case '-':ans=b-a;break;
                    case '*':ans=b*a;break;
                    case '/':ans=b/a;break; 
                }
                st.push(ans);
            }else{
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};