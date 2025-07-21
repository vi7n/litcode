class Solution
{
public:
    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        int Area = 0;
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
        {
            return Area;
        }

        grid[i][j] = 9; // basically counted
        Area = 1 + dfs(grid, i + 1, j) + dfs(grid, i - 1, j) + dfs(grid, i, j + 1) + dfs(grid, i, j - 1);
        return Area;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        if (grid.empty())
        {
            return 0;
        }

        int maxArea = 0;

        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                if (grid[row][col] == 1)
                {
                    maxArea = max(maxArea, dfs(grid, row, col));
                }
            }
        }
        return maxArea;
    }
};