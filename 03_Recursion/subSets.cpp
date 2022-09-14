#include<iostream>
using namespace std;

void subSets(string s, string c="", int i=0){
    if(i == s.length()){
        cout << c << " ";
        return;
    }
    subSets(s, c, i + 1);
    subSets(s, c + s[i], i + 1);
}
int main(){
    string s;
    cin >> s;
    subSets(s);
}