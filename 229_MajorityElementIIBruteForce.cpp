class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //brute force: TC: O(n^2), SC; O(2n).
        //at max 2 majority elements can be there.
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(ans.size()==0 || (ans[0]!=nums[i]))
            {
                int cnt=0;
                for(int j=0;j<nums.size();j++)
                {
                    if(nums[i]==nums[j])
                    {
                        cnt++;
                    }
                }
                if(cnt>(n/3) && ans.size()!=2)
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};
