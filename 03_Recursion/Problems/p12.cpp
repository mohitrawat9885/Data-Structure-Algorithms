#include<iostream>
#include<vector>
using namespace std;

vector<string>v{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> possibleWords(int a[], int N, string st="", int c_ind=0 ){
    vector<string> ans;
    if(c_ind == N){
        ans.push_back(st);
        return ans;
    }
    string s = v[a[c_ind]];
    for (int i = 0; i < s.size();i++){
        vector<string>t = possibleWords(a, N, st + s[i], c_ind + 1);
        ans.insert(ans.end(), t.begin(), t.end());
    }
    return ans;
}
int main(){
    vector<string> ans;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    ans = possibleWords(arr, n);
    for(auto i: ans){
        cout << i << endl;
    }
}