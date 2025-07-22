class Solution
{
public:
    void dfs(vector<vector<int>> &grid, int i, int j, int levels)
    {
        int rows = grid.size(), cols = grid[0].size();
        if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] == -1)
            return;
        if (grid[i][j] >= levels)
        {
            grid[i][j] = min(grid[i][j], levels);
            levels++;
            dfs(grid, i + 1, j, levels);
            dfs(grid, i - 1, j, levels);
            dfs(grid, i, j + 1, levels);
            dfs(grid, i, j - 1, levels);
        }
        else
            return;
    }

    void islandsAndTreasure(vector<vector<int>> &grid)
    {
        for (int row = 0; row < grid.size(); row++)
        {
            for (int col = 0; col < grid[0].size(); col++)
            {
                if (grid[row][col] == 0)
                {
                    dfs(grid, row, col, 0);
                }
            }
        }
    }
};
