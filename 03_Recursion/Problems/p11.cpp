#include<iostream>
#include <vector>
using namespace std;

vector <string> subSets(string st, string c="", int i=0){
    vector<string> v;
    if(i == st.length()){
        v.push_back(c);
        return v;
    }
    vector<string>v1 = subSets(st, c, i + 1);
    vector<string>v2 = subSets(st, c + st[i], i + 1);
    v.insert(v.end(), v1.begin(), v1.end());
    v.insert(v.end(), v2.begin(), v2.end());
    return v;
}

int main(){
    vector<string> v;
    string st;
    cin >> st;
    v = subSets(st);
    for(auto x: v){
        cout << x << " ";
    }
}