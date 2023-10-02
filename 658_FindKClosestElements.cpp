class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //2 Pointer approach: TC: O(n-k)
        int low=0;
        int high=arr.size()-1;
        vector<int> ans;

        while((high-low)>=k)
        {
            if((x-arr[low])>(arr[high]-x))
            {
                low++;
            }
            else
            {
                high--;
            }
        }

        for(int i=low;i<=high;i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
