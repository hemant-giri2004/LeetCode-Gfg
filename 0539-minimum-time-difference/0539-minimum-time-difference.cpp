class Solution {
public:
    int minutesConverter(string &s){
        int hh=stoi(s.substr(0,2));
        int mm=stoi(s.substr(3,2));
        return 60*hh+mm;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(auto & str:timePoints)
            minutes.push_back(minutesConverter(str));
        sort(minutes.begin(),minutes.end());
        int mindif=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
            mindif=min(mindif,minutes[i+1]-minutes[i]);
        int lastdif=minutes[0]+1440-minutes[minutes.size()-1];
        mindif=min(mindif,lastdif);
        return mindif;
    }
};