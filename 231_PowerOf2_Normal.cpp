class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=0;i<=30;i++)
        {
            if(ans==n)
            {
                return true;
            }

            if(ans<(INT_MAX)/2) //checking if ans*2 will become 2^31 that is out of int range.
            {
                ans=ans*2; //equivalent to power only.
            //updating ans afterwards so that checks for n=0 as well in which case ans=1 true.
            }
        }
        return false;
    }
};
