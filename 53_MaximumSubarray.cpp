class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's algo. TC: O(n).
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            //taking care of negative
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};
