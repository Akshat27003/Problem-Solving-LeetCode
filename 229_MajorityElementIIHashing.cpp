class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //better approach:  hashing
        //TC: O(n), SC: O(n) + space reqd to store the ans in vector and return it.
        //max, it can be 2 majority elements.
        int n=nums.size();
        vector<int> ans;

        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]]==((n/3)+1))
            {
                ans.push_back(nums[i]);
            }
            if(ans.size()==2)
            {
                break;
            }
        }

        return ans;
    }
};
