#include<iostream>
using namespace std;

int NaivePatSearch(string &txt, string &pat){
    for (int i = 0; i < txt.length();i++){
        int j;
        for (j = 0; j < pat.length();j++){
            if(txt[i+j] != pat[j]){
                break;
            }
        }
        if(j==pat.length()){
            return i;
        }
    }
}
int main(){
    string txt = "Hello world! this is world of AI the Artificial Intelligence Brain";
    string pat;
    cin>>pat;
    int s = NaivePatSearch(txt, pat);
    cout << s+1 << " to " <<s+ pat.length();
}