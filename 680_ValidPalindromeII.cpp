class Solution {
public:

    bool checkPalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                //check if removing either ith char or jth char makes the remaining string as palindrome
                return (checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1));
            }

            else
            {
                //if char matches, continue to check the next characters.
                i++;
                j--;
            }
        }
        //if already palindrome, no need to delete any char
        return true;
    }
};
