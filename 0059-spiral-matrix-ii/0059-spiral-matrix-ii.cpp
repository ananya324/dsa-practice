class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        int count = 1;

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++) {
                result[top][j] = count++;
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                result[i][right] = count++;
            }
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    result[bottom][j] = count++;
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result[i][left] = count++;
                }
                left++;
            }
        }

        return result;
    }
};