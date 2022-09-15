class Solution{
    void perSpace(int i, string s, string ns, vector<string>&ans){
        if(i == s.length()){
            ans.push_back(ns);
            return;
        }
        
        if(i != s.length() -1)perSpace(i+1, s, ns+s[i] + " ",  ans);
        perSpace(i+1, s, ns+ s[i], ans);
    }
public:
    vector<string> permutation(string S){
        vector<string>ans;
        perSpace(0, S,"",  ans);    
        return ans;
    }
};