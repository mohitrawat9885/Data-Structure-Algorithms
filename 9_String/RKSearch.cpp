#include<iostream>
#define d 256
using namespace std;

const int q = 101;

int RKSearch(string &txt, string &pat){
    int n = txt.length();
    int m = pat.length();

    int p = 0;
    int t = 0;
    int h = 1;
    for (int i = 1; i <= m - 1;i++){
        h = (h * d) % q;
    }
    for (int i = 0; i < m;i++){
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (int i = 0; i <= n - m;i++){
        if(p == t){
            int j;
            for (j = 0; j < m;j++){
                if(txt[i+j] != pat[j]){
                    break;
                }
            }
            if(j==m){
                return i;
            }
        }
        if(i<n-m){
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
        }
        if(t < 0){
            t += q;
        }
    }
    return -1;
}

int main(){
    string txt = "Hello world! this is world of AI the Artificial Intelligence Brain";
    string pat;
    cin>>pat;
    int s = RKSearch(txt, pat);
    if(s < 0){
        cout << "Not found";
        return 0;
    }
    cout<<s+1<<" to "<<s+pat.length();
}