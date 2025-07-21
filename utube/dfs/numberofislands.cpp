class Solution
{
public:
    void dfs(vector<vector<char>> &grid, int r, int c)
    {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] != '1')
        {
            return;
        }

        grid[r][c] = 'S';
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        if (grid.empty())
        {
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};