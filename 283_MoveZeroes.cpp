class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        //storing non zero numbers in order.
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }

        //assigning non zero elements to nums array.
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }

        //assigning remaining values of nums as 0.
        for(int i=temp.size();i<nums.size();i++)
        {
            nums[i]=0;
        }


    }
};
