class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //brute force
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    if(nums[j]<nums[i])
                    {
                        cnt++;
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
