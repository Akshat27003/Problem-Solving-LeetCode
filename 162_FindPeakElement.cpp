class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;

        int mid=s+(e-s)/2;

        while(s<e)
        {
            if(nums[mid]<nums[mid+1])
            {
                //search in the right
                s=mid+1;
            }
            else
            {
                //search in the left but not to lose the peak.
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s; //could have returned e as well. both would be equal when loop stops.
    }
};
