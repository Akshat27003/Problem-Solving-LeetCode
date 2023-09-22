class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //positioning method. TC: O(n), SC: O(1).

        //as long as element at index 0 is not at the index it points to,
        //swap elements at 0th index and index pointed by the element at the 0th index.
        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
        }

        //when while becomes false, all elements except the duplicates ones will be at their index.
        //nums[0] will have the duplicate value.
        return nums[0];
    }
};
