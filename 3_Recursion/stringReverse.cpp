#include<bits/stdc++.h>
using namespace std;

void reverseString(string &st, int l, int r){
   if(l == r) return;
   swap(st[l], st[r]);
   reverseString(st, l+1, r-1);
}

void reverse(string &st, int i){
    if(st.length() - 1 - i   <= i) return;
   swap(st[st.length()-1-i], st[i]);
   return reverse(st, i+1);
}

int main(){
    string st = "mohit rawat 9885";
    reverse(st, 0);
    // cout<<st.substr(1, );
    cout<<st;
}