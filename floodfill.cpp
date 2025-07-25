class Solution {
private:
    void dfs(vector<vector<int>>& image, vector<vector<int>>& ans, int sr, int sc, int newColor,
             int delRow[], int delCol[], int initial_color) {

        int n = image.size();
        int m = image[0].size();

        ans[sr][sc] = newColor;

        for (int it : {0, 1, 2, 3}) {
            int newRow = sr + delRow[it];
            int newCol = sc + delCol[it];

            // Check bounds
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m) {
                if (image[newRow][newCol] == initial_color && ans[newRow][newCol] != newColor) {
                    dfs(image, ans, newRow, newCol, newColor, delRow, delCol, initial_color);
                }
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans = image;
        int delRow[] = {-1, +1, 0, 0};
        int delCol[] = {0, 0, -1, +1};
        int initial_color = image[sr][sc];

        if (initial_color != newColor) {
            dfs(image, ans, sr, sc, newColor, delRow, delCol, initial_color);
        }

        return ans;
    }
};
