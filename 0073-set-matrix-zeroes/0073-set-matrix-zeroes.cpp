class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        // Create two arrays to store information about which rows and columns to zero.
        vector<bool> zeroRow(n, false);
        vector<bool> zeroCol(m, false);
        
        // Iterate through the matrix and mark rows and columns that need to be zeroed.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    zeroRow[i] = true;
                    zeroCol[j] = true;
                }
            }
        }
        
        // Update the matrix based on the information stored in the arrays.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (zeroRow[i] || zeroCol[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
