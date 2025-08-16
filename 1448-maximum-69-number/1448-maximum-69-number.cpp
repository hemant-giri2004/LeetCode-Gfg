class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        int placeVal=-1;
        for(int i=0;n;i++){
            if(n%10 == 6)
                placeVal=i;
            n/=10;
        }
        if(placeVal!=-1)
            num=num+(3*pow(10,placeVal));
        return num;
    }
};