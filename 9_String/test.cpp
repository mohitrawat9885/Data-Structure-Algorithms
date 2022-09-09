#include<iostream>
using namespace std;

int main(){
    string s = "0123456789";
    for (int i = 0; i < s.length();i++){
        cout << (int)s[i] << " ";
    }
}