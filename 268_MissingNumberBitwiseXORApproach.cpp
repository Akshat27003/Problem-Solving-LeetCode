class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Approach 2: Bitwise Xor Approach:
        //when we xor each element of arr and each element of range, each will cancel out.
        //the only element which will remain is the one in range having no match will any element in array.
        int n=nums.size();
        int ans=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            ans=ans^nums[i]^i;
        }
        ans=ans^i;
        return ans;
    }
};
