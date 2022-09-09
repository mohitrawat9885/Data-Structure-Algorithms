#include<iostream>
using namespace std;

int palindrom(string s){
    int l=0, r=s.size()-1;

    while(l<r){
        if(s[l] != s[r]) return 1;
        l++;
        r--;
    }
    return s.length();
}

void printSubsequences(string st, string ans, int i, int &count, string &fi){
    if(i >= st.size()){
        int size = palindrom(ans);
    
        if(size > count){
            count = size;
            fi = ans;
        }
        cout<<ans<<" "<<size<<endl;
        return;
    }

    printSubsequences(st, ans, i+1, count, fi);
    printSubsequences(st, ans+st[i], i+1, count, fi);
}

int main(){
    string st = "bbabcbcab";
    int count=0;
    string fi;
    printSubsequences(st, "", 0, count, fi);
    cout<<count<<" "<<fi;

}