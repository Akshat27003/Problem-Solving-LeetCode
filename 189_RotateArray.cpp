class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size()); //take case of when k is more than size of vector
        //brute force approach: O(k) extra space

        //Store the values to be rotated in temp vector.
        vector<int> temp;
        for(int i=(nums.size()-k);i<nums.size();i++)
        {
            temp.push_back(nums[i]);
        }

        //shifting remaining elements to right by k places.
        //shift values from end to start to avoid overlap of values.
        for(int i=(nums.size()-k-1);i>=0;i--)
        {
            nums[i+k]=nums[i];
        }

        //Assign values of temp array at the start
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
    }
};
