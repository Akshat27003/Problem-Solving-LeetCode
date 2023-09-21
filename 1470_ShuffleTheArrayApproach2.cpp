class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //changing same array. O(n^2).
        for(int i=n-1;i>=1;i--)
        {
            for(int j=i;j<(2*i);j++)
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
        return nums;
    }
};
