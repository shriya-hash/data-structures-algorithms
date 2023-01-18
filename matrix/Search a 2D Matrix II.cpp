class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j=matrix[0].size()-1;
        int m = matrix.size(), n=matrix[0].size();
        while(i>=0 && i<m && j>=0 && j<n)
        {
            if(target==matrix[i][j])
            return true;
            else if(target<matrix[i][j])
            {
                j--;
            }
            else
            {
                i++;
            } 
        }
        return false;
        
    }
};
