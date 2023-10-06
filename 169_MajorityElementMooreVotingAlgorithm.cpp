class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Optimal Solution: Moore's Voting Algorithm..
        //element always exist, we dont need to check it at the end.

        int cnt=0;
        int elt;

        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)
            {
                cnt=1;
                elt=nums[i];
            }
            else if(nums[i]==elt)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }

        return elt;
    }
};
