class Solution {
public:
    //Approach: Binary Search: TC: O(n log n).
    int binarySearch(vector<int>& nums,int start,int key)
    {
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==key)
            {
                return mid;
            }
            else if(key>nums[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        set<pair<int,int>> ans;

        for(int i=0;i<nums.size();i++)
        {
             if(binarySearch(nums,i+1,nums[i]+k)!=-1)
             {
                 ans.insert({nums[i],nums[i]+k});
             }
        }
        return ans.size();
    }
};
