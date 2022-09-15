class Solution
{
    void track(int r, int c, vector<vector<int>> &grid, vector<int>v, vector<vector<int>> &ans){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size()) return;
        if(r == grid.size()-1 && c == grid[0].size()-1){
            v.push_back(grid[r][c]);
            ans.push_back(v);
            return;
        }
        
        v.push_back(grid[r][c]);
        track(r+1, c, grid, v, ans);
        track(r, c+1, grid, v, ans);
        
    }
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<vector<int>>ans;
        vector<int>v;
        track(0, 0, grid, v, ans);
        return ans;
    }
};