class Solution
{   void permutate(int i, string s, vector<string>&ans, unordered_set<string>&us){
    if(i == s.length()-1){
        if(us.find(s) == us.end()){
             ans.push_back(s);
             us.insert(s);
        }
        return;
    }
    
    for(int j=i;j<s.length();j++){
        swap(s[i], s[j]);
        permutate(i+1, s, ans, us);
        swap(s[i], s[j]);
    }
}
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    unordered_set<string>us;
		    permutate(0, S, ans, us);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};