class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //for calculating pick time...
        int pickM=0,pickP=0,pickG=0;
        //for last index where the indiviual garbage meet
        int lastM=0,lastP=0,lastG=0;
        //for calculating trvel time...
        int travelM=0,travelP=0,travelG=0;

        //calculate pick time 
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                if(garbage[i][j]=='M'){
                    pickM++;
                    lastM=i;
                }
                else if(garbage[i][j]=='P'){
                    pickP++;
                    lastP=i;
                }
                else if(garbage[i][j]=='G'){
                    pickG++;
                    lastG=i;
                }
            }
        }

        //calculate trvel time
        for(int i=0;i<lastM;i++)
            travelM+=travel[i];
        for(int i=0;i<lastP;i++)
            travelP+=travel[i];
        for(int i=0;i<lastG;i++)
            travelG+=travel[i];
        
        return pickM+travelM+pickP+travelP+pickG+travelG;
    }
};