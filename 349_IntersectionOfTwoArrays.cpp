class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //simple brute force
        //checking for duplication in first array.
        for(int i=0;i<nums1.size()-1;i++)
        {
            for(int j=i+1;j<nums1.size();j++)
            {
                if(nums1[i]==nums1[j])
                {
                    nums1[j]=-1;
                }
            }
        }

        //checking for duplication in second array.
        for(int i=0;i<nums2.size()-1;i++)
        {
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[i]==nums2[j])
                {
                    nums2[j]=-1;
                }
            }
        }

        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j] && nums1[i]!=-1)
                {
                    nums2[j]=-1; //making sure duplication between the 2 arrays is completely removed.
                    ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};
