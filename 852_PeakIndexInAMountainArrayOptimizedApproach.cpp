class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //optimized approach: binary search: O(log n)
        int ans=0;
        int start=1;
        int endIndex=arr.size()-2;
        while(start<=endIndex)
        {
            int mid=(start+endIndex)/2;
            if((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1]))
            {
                ans=mid;
                break;
            }
            else if(arr[mid]>arr[mid-1])
            {
                start=mid+1;
            }
            else if(arr[mid]>arr[mid+1])
            {
                endIndex=mid-1;
            }
        }
        return ans;
    }
};
