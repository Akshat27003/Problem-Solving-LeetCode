class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n=nums.size();

        //if 1 element is there
        if(n==1)
        {
            return 0;
        }

        //avoiding mid-1 check
        if(nums[0]>nums[1])
        {
            return 0;
        }

        //avoiding mid+1 check
        if(nums[n-1]>nums[n-2])
        {
            return n-1;
        }

        int s=1;
        int e=n-2;

        int mid=s+(e-s)/2;

        while(s<=e)
        {
            if((nums[mid]>nums[mid-1]) && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                //search in the right
                s=mid+1;
            }
            else
            {
                //tackling all other cases including the one of multiple peaks
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};
