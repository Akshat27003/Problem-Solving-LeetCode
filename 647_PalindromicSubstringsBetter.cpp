class Solution {
public:
    //Better: TC: O(n^2).
    int expandAroundIndex(string s,int i,int j)
    {
        int cnt=0;
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }

    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            int oddLengthCases=expandAroundIndex(s,i,i);
            cnt+=oddLengthCases;
            int evenLengthCases=expandAroundIndex(s,i,i+1);
            cnt+=evenLengthCases;
        }
        return cnt;
    }
};
