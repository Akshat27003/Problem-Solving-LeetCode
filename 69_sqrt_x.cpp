class Solution {
public:
    int mySqrt(int x) {
        //binary search O(log n)
        int s=0;
        int e=x;
        long long mid=s+(e-s)/2; //to prevent overflow in mid*mid
        int ans=0;
        while(s<=e)
        {
            if((mid*mid)>x)
            {
                e=mid-1;
            }
            else if((mid*mid)<x)
            {
                ans=mid;
                s=mid+1;
            }
            //if mid*mid==x, exact square root exists
            else
            {
                return mid;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
