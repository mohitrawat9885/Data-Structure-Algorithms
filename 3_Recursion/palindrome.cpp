#include<iostream>
using namespace std;

bool isPalindrome(string st, int x =0){
    int z = st.length() - 1 - x;
    if(x>=z){
        return true;
    }
    return (st[x] == st[z]) && isPalindrome(st, x + 1);
}

int main(){
    string st;
    cin >> st;
    cout << (isPalindrome(st) ? "Yes" : "No");
}