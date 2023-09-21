class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        //brute force: linear search: O(n)
        int ans=0;
        for(int i=1;i<arr.size()-1;i++)
        {
            if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1]))
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};
