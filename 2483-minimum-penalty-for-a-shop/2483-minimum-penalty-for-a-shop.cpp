class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int> close(n+1);
        close[n]=0;
        for(int i=n-1;i>=0;i--){
            close[i]=close[i+1];
            if(customers[i]=='Y')
                close[i]++;
        }
        int open=0,minPen=close[0],minInd=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='N')
                open++;
            int totalPen=close[i+1]+open;
            if(minPen>totalPen){
                minPen=min(minPen,totalPen);
                minInd=i+1;
            }
        }
        return minInd;
    }
};