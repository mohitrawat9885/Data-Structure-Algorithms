#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["mohit"] = 20;
    m["rawat"] = 30;
    m.insert({"DSA", 15});

    if(m.find("ide")!=m.end()){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
    cout << endl;
    for (auto it = m.begin(); it != m.end();it++){
        cout << (it->first) << " " << (it->second) << endl;
    }
}