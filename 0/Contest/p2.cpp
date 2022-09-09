#include<iostream>
using namespace std;

void RBSearch(string txt, string pat){
    int n = txt.size();
    int m = pat.size();
    int p = 0;
    for (int i = 0; i < m;i++){
        p += int(pat[i]);
    }
    int t = 0;
    for (int i = 0; i < m;i++){
        t += int(txt[i]);
    }
    bool flag = false;
    for (int i = 0; i <= n-m;i++){
        if(p == t){
            flag = true;

            for (int j = 0; j < m;j++){
                cout << txt[i+j];
            }
            cout << " " << i << endl;
        }
        if(i < n-m){
            t -= txt[i];
            t += txt[i + m];
        }
    }
    if(!flag){
        cout << "-1"<<endl;
    }
}
int main(){
    string txt, pat;
    cin >> txt>>pat;
    RBSearch(txt, pat);
}