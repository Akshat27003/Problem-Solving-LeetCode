class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //optimal solution: extension of moores voting algo. TC: O(2n), SC:O(1).
        //at max 2 elements can be possible.

        int elt1,elt2;
        int cnt1=0,cnt2=0;

        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0 && (elt2!=nums[i]))
            {
                cnt1=1;
                elt1=nums[i];
            }
            else if(cnt2==0 && (elt1!=nums[i]))
            {
                cnt2=1;
                elt2=nums[i];
            }
            else if(elt1==nums[i])
            {
                cnt1++;
            }
            else if(elt2==nums[i])
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==elt1)
            {
                cnt1++;
            }
            else if(nums[i]==elt2)
            {
                cnt2++;
            }
        }

        vector<int> ans;
        if(cnt1>(nums.size()/3))
        {
            ans.push_back(elt1);
        }
        if(cnt2>(nums.size()/3))
        {
            ans.push_back(elt2);
        }

        return ans;
    }
};
