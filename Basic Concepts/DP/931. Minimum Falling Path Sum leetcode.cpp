
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
          int n = matrix.size();

    // Handle base case: if the matrix has only one row, return the minimum element in that row.
    if (n == 1) {
        return *min_element(matrix[0].begin(), matrix[0].end());
    }

    // Dynamic programming to compute the minimum falling sum for each cell in the matrix.
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int left = (j > 0) ? matrix[i - 1][j - 1] : INT_MAX;
            int right = (j < n - 1) ? matrix[i - 1][j + 1] : INT_MAX;
            int straight = matrix[i - 1][j];

            matrix[i][j] += min(left, min(right, straight));
        }
    }

    // Find the minimum falling sum in the last row.
    return *min_element(matrix[n - 1].begin(), matrix[n - 1].end());

    }
};
