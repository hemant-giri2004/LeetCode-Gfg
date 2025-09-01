class Solution {
public:
    #define P pair<double,int> 
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        //Pass ratio : pr= pass count of student/total count of student in class.
        //Average pass ratio : ar=total of pr/total class.
        
        // int n=classes.size();
        // vector<double> pr(n);
        // for(int i=0;i<n;i++){
        //     double ratio=(double)classes[i][0]/classes[i][1];
        //     pr[i]=ratio;
        // }
        // while(extraStudents--){  //student 0

        //     vector<double> updatedPr(n);
        //     for(int i=0;i<n;i++){
        //         double newRatio= (double)(classes[i][0]+1)/(classes[i][1]+1);
        //         updatedPr[i]=newRatio;
        //     }

            
        //     int bestClassIdx=0;
        //     double bestChange=0.0;
        //     for(int i=0;i<n;i++){
        //         double change=updatedPr[i]-pr[i];
        //         if(change > bestChange){
        //             bestChange=change;
        //             bestClassIdx=i;
        //         }
        //     }

        //     pr[bestClassIdx]+=bestChange;
        //     classes[bestClassIdx][0]++;
        //     classes[bestClassIdx][1]++;
            
        // }

        // double result=0.0;
        // for(int i=0;i<n;i++){
        //     result+=pr[i];
        // }
        // return result/n;

        int n=classes.size();
        priority_queue<P> PR; //max-heap - //double=max delte ,idx

        for(int i=0;i<n;i++){
            double current_PR=(double)classes[i][0]/classes[i][1];
            double new_PR=(double)(classes[i][0]+1)/(classes[i][1]+1);
            double delta=new_PR-current_PR;
            PR.push({delta,i});
        }

        while(extraStudents--){
            auto curr = PR.top();
            PR.pop();

            double delta=curr.first;
            int idx=curr.second;

            classes[idx][0]++;
            classes[idx][1]++;

            double current_PR=(double)classes[idx][0]/classes[idx][1];
            double new_PR=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            double delta1=new_PR-current_PR;
            PR.push({delta1,idx});
        }

        double result=0.0;
        for(int i=0;i<n;i++){
            result+=(double)classes[i][0]/classes[i][1];
        }

        return result/n;
    }
};