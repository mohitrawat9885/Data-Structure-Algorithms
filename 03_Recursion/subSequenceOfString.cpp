#include<bits/stdc++.h>
using namespace std;


void subSequence(string st, string out = "", int i=0){
    if(i >= st.length()){
        cout<<out<<endl; return;
    }
    subSequence(st, out, i+1);
    subSequence(st, out+st[i], i+1);
}

int main(){
    string st = "ABC";
    subSequence(st);
}