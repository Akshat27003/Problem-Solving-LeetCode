class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //convert string of time in hr nd min into pure minutes
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++)
        {
            string curr=timePoints[i];
            int hrs=stoi(curr.substr(0,2));
            int mins=stoi(curr.substr(3,2));
            int totalMins=(hrs*60)+mins;
            minutes.push_back(totalMins);
        }

        //sort the vector of minutes to avoid time nd reduce comparisons.
        sort(minutes.begin(),minutes.end());

        //compare adjacent time and finding the minimum time.
        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++)
        {
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }

        //compare last time with the first time as time repeats after 24 hrs i.e. 1440 minutes.
        int lastDiff1=(minutes[0]+1440)-minutes[n-1];
        int lastDiff2=minutes[n-1]-minutes[0];
        int lastDiff=lastDiff1 > lastDiff2 ? lastDiff2 : lastDiff1;
        mini=min(mini,lastDiff);

        return mini;
    }
};
