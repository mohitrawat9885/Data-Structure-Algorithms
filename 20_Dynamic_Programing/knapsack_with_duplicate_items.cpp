class Solution{
    int solve(int i, int w, int n, int val[], int wt[], vector<vector<int>> &dp){
        if(w <= 0 || i == n)  return 0;
        
        
        if(dp[i][w] != -1) return dp[i][w];
        
        if(wt[i] > w){
            return dp[i][w] = solve(i+1, w, n, val, wt, dp);
        }
        
        return dp[i][w] = max( val[i] + solve(i, w-wt[i], n, val, wt, dp),
                solve(i+1, w, n, val, wt, dp)
            );
    }
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(N+1, vector<int>(W+1, -1));
        return solve(0, W, N, val, wt, dp);
    }
};