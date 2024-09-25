class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0;
        for(string str:commands){
            if(str=="UP")
                i--;
            else if(str=="DOWN")
                i++;
            else if(str=="RIGHT")
                j++;
            else 
                j--;
        }
        return i*n+j;
    }
};