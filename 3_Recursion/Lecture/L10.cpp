#include<iostream>
using namespace std;



bool isPalindrom(string &str, int start, int end){
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end] && isPalindrom(str, start + 1, end - 1));
}

int main(){
    string st;
    cin >> st;
    cout << isPalindrom(st, 0, st.length()-1);
}