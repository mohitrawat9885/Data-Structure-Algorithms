class Solution{
    vector<int>v;
    vector<vector<int>> ans;
    
    
    void fillBan(int i, int j, int n, int b,  vector<vector<int>>&ban){
        
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                if(ban[l][m] == -1 && (l == i || m == j || (i-j == l-m) || i+j == l+m)){
                    ban[l][m] = b;
                }
            }
        }
    }
    
    void wapBan(int b, int n,  vector<vector<int>>&ban){
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                if(ban[l][m] == b){
                    ban[l][m] = -1;
                }
            }
        }
    }
    
    void solve(int i, int n,  vector<vector<int>> &ban){
        
       if(v.size() == n){
           ans.push_back(v);
           return;
       }
       
        for(int a=0;a<n;a++){
            if(ban[i][a] == -1){
                v.push_back(a+1);
                fillBan(i, a, n, i, ban);
                solve(i+1, n, ban);
                fillBan(i, a, n, -1, ban);
                v.pop_back();
            }
        }
    }
public:
    vector<vector<int>> nQueen(int n) {
        
    vector<vector<int>>ban(n, vector<int>(n, -1));
        
       solve(0, n, ban);
       return ans;
    }
};