class Solution {
public:
    int findIslandArea(vector<vector<int>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size()) {
            return 0;
        }
        
        int area = 0;
        if (grid[row][col] == 1) {
            grid[row][col] = 0;
            area = 1 + findIslandArea(grid, row + 1, col) + findIslandArea(grid, row - 1, col)
                + findIslandArea(grid, row, col + 1) + findIslandArea(grid, row, col - 1);
        }
        
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>> grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    area = max(area, findIslandArea(grid, i, j));
                }
            }
        }
        return area;
    }
};
