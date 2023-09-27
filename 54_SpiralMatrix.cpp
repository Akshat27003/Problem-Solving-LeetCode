class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {


        vector<int> ans;

        int m=matrix.size();
        int n=matrix[0].size();

        int startRow=0;
        int startCol=0;
        int endRow=m-1;
        int endCol=n-1;

        int i=0;
        //check with each push_back operation if our count is full in between any executing for loop.
        // if yes, break out of the loop and return.
        while(i<(m*n))
        {
            //print top row
            for(int j=startCol;j<=endCol && i<(m*n);j++)
            {
                ans.push_back(matrix[startRow][j]);
                i++;
            }
            startRow=startRow+1;

            //print end col
            for(int j=startRow;j<=endRow && i<(m*n);j++)
            {
                ans.push_back(matrix[j][endCol]);
                i++;
            }
            endCol=endCol-1;

            //print end row
            for(int j=endCol;j>=startCol && i<(m*n);j--)
            {
                ans.push_back(matrix[endRow][j]);
                i++;
            }
            endRow=endRow-1;

            //print top col
            for(int j=endRow;j>=startRow && i<(m*n);j--)
            {
                ans.push_back(matrix[j][startCol]);
                i++;
            }
            startCol=startCol+1;
        }
        return ans;
    }
};
