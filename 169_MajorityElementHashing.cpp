class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Better Approach: Hashing. TC: O(n), SC: O(n).
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }

        for(auto itr : hash)
        {
            if(itr.second>(nums.size()/2))
            {
                return itr.first;
            }
        }
        return -1;
    }
};
