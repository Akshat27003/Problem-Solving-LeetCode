class Solution {
public:

    //find pivot element that is the break point of the sorted array

    int findPivot(vector<int>& nums)
    {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;

        while(s<=e)
        {
            if(s==e)
            {
                return s;
            }
            if(mid+1<(nums.size()) && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            if(mid-1>=0 && nums[mid-1]>nums[mid])
            {
                return (mid-1);
            }
            if(nums[s]>nums[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }

    //apply normal binary search to find target in array till pivot and post pivot separately.

    int binarySearch(vector<int>& nums,int start,int end,int target)
    {
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex=findPivot(nums);

        //if target element lies in the rotated portion
        int ans;
        if(target>=nums[0] && target<=nums[pivotIndex])
        {
            ans=binarySearch(nums,0,pivotIndex,target);
        }
        //if it lies after pivot
        else
        {
            ans=binarySearch(nums,pivotIndex+1,nums.size()-1,target);
        }
        return ans;

    }
};
