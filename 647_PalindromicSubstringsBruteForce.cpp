class Solution {
public:
    //Brute Force: TC: O(n^3).
    bool checkPalindrome(string sub)
    {
        int s=0;
        int e=sub.length()-1;
        while(s<e)
        {
            if(sub[s]!=sub[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(checkPalindrome(s.substr(i,j-i+1)))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
