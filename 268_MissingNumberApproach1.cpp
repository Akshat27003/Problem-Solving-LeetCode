class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Approach 1: Sum of all n numbers - sum of elements in array will give the difference.
        //difference will be the element missing in the array.
        int n=nums.size();
        int sumOfnElts=(n*(n+1))/2;
        int sumOfArrElts=0;
        for(int i=0;i<n;i++)
        {
            sumOfArrElts+=nums[i];
        }
        int ans=sumOfnElts-sumOfArrElts;
        return ans;
    }
};
