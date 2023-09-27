class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n,vector<int>(n));

        int startRow=0;
        int endRow=n-1;
        int startCol=0;
        int endCol=n-1;

        int i=1;
        while(i<=(n*n))
        {
            //top row
            for(int j=startCol;j<=endCol;j++)
            {
                ans[startRow][j]=i++;
            }
            startRow=startRow+1;

            //end col
            for(int j=startRow;j<=endRow;j++)
            {
                ans[j][endCol]=i++;
            }
            endCol=endCol-1;

            //end row
            for(int j=endCol;j>=startCol;j--)
            {
                ans[endRow][j]=i++;
            }
            endRow=endRow-1;

            //start col
            for(int j=endRow;j>=startRow;j--)
            {
                ans[j][startCol]=i++;
            }
            startCol=startCol+1;
        }
        return ans;
    }
};
