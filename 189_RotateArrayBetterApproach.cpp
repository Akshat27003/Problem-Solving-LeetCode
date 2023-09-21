class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size()); //take case of when k is more than size of vector
        //better approach:
        //reverse the part to be rotated
        reverse(nums.end()-k,nums.end());

        //reverse the elements to be shifted
        reverse(nums.begin(),nums.end()-k);

        //reverse the vector entirely to get to the desired changes in vector
        reverse(nums.begin(),nums.end());
    }
};
