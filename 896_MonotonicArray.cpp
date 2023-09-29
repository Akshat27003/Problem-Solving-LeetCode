class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true;
        bool dec=true;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            //condition for increasing
            if(nums[i]>nums[i+1])
            {
                inc=false;
            }
            //condition for decreasing
            if(nums[i]<nums[i+1])
            {
                dec=false;
            }
        }

        //true if either increasing or decreasing
        return (inc || dec);
    }
};
