class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //optimal approach: in place algorithm. SC: O(1). TC: O(n^2)
        //transpose the matrix
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix[0].size();j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
        }

        //reverse each row of the transposed matrix.
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }


    }
};
