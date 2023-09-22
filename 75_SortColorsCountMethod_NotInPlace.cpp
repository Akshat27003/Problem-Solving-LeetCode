class Solution {
public:
    void sortColors(vector<int>& nums) {
        //count method
        //not an in-place solution.. involves modification or overriding of original values.
        //TC: O(2n)
        //SC: O(1)
        int noOfZeros=0;
        int noOfOnes=0;
        int noOfTwos=0;

        //count the no of occurrences of 0,1 and 2.
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                noOfZeros++;
            }
            else if(nums[i]==1)
            {
                noOfOnes++;
            }
            else
            {
                noOfTwos++;
            }
        }

        //modifying the array with each element placed in order based upon their count.
        int index=0;
        while(noOfZeros--)
        {
            nums[index]=0;
            index++;
        }
        while(noOfOnes>0)
        {
            nums[index]=1;
            index++;
            noOfOnes--;
        }
        while(noOfTwos-->0)
        {
            nums[index]=2;
            index++;
        }
    }
};
