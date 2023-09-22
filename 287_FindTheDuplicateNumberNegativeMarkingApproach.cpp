class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //negative marking approach. TC: O(n), SC: O(1).
        for(int i=0;i<nums.size();i++)
        {
            //considering each element as index. use abs for +ve value.
            int index=abs(nums[i]);

            //if an element appears twice, it will point to element already visited.
            if(nums[index]<0)
            {
                return index;
            }

            //if first visit, mark the element visited
            nums[index]=nums[index]*-1;
        }
        return -1;
    }
};
