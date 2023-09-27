class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //brute force.. creating answer vector temporarily to store values and assign back to matrix. TC: O(n^2), SC: O(n^2)
        int n=matrix.size();
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                ans[j][matrix.size()-1-i]=matrix[i][j];
            }
        }

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j]=ans[i][j];
            }
        }

    }
};
