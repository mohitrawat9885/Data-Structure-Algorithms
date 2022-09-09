#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string st, int i){
    if(st.length() -1 -i <= i) return true;
    return st[i] == st[st.length()-1-i] && isPalindrome(st, i+1);
}

int main(){
    string st ="125821";
    cout<<isPalindrome(st, 0);

}