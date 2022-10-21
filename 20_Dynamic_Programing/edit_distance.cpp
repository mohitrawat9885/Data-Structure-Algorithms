class Solution {
    int solve(int i, int j, string w1, string w2, vector<vector<int>> &dp){
        if(i == w1.length()) return w2.length() - j;
        if(j == w2.length()) return w1.length() - i;
        
        if(dp[i][j] != -1) return dp[i][j];
        if(w1[i] == w2[j]){
            return dp[i][j] = solve(i+1, j+1, w1, w2, dp);
        }
        
        return dp[i][j] = 1 + min(
            solve(i+1, j+1, w1, w2, dp),
            min(
            solve(i, j+1, w1, w2, dp),
            solve(i+1, j, w1, w2, dp)));
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.length()+1, vector<int>(word2.length()+1, -1));
        return solve(0, 0, word1, word2, dp);
    }
};