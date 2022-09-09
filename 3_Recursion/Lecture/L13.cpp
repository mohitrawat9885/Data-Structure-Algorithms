#include<iostream>
using namespace std;

void printSubSets(string s, string c="", int i=0){
    if(i==s.length()){
        cout <<c<<endl;
        return;
    }
    printSubSets(s, c, i + 1);
    printSubSets(s, c+s[i], i + 1);
}

int main(){
    string str;
    cin >> str;
    printSubSets(str);
}