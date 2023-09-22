class Solution {
public:
    void sortColors(vector<int>& nums) {
        //in-place method / three pointer approach
        //TC: O(n)
        //SC: O(1)
        //take three pointers. 1 for zeros, 1 for ones, 1 for twos.
        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }

            else if(nums[mid]==1)
            {
                mid++;
            }

            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
