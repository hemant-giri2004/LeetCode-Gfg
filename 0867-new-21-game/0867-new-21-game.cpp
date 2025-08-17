class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        // vector<double> P(n+1,0.0);  
        // //p[i] = probob of getting score = i
        // P[0]=1; //score =0 initailly

        // for(int i=0; i<=n ; i++){
        //     for(int card = 1; card <= maxPts; card++){
        //         //probo of scores card = 1/maxPoints
        //         //remain score = P[i-card]
        //         if(i- card >= 0 && i-card < k)
        //             P[i] += P[i-card]/maxPts;

        //     }

        // }
        // //k to n tak ka probab add krna h.
        // return accumulate(begin(P)+k , end(P), 0.0);

        vector<double> P(n+1 , 0.0);
        P[0]=1;
        double curProbabSum =(k==0)? 0:1;
        for(int i =1; i<=n ; i++){
            P[i]=curProbabSum/maxPts;
            if(i<k)
                curProbabSum += P[i];
            if(i-maxPts >=0 && i-maxPts <k)
                curProbabSum -= P[i-maxPts];
            
        }
        return accumulate(begin(P)+k, end(P), 0.0);
    }
};