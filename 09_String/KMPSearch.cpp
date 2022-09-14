#include<iostream>
using namespace std;

void generateLPS(string pat, int lps[]){
    return;
}

void KMPSearch(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    if(n < m){
        cout <<-1;
        return;
    }
    int lps[m];
    generateLPS(pat, lps);
    int j = 0, i=0;
    while(i<n){
        if(txt[i] == pat[j]){
            i++;
            j++;
        }

        if(j == m){
            cout<<i-j;
            j = lps[j - 1];
        }
        else if(i<n && pat[j] != txt[i]){
            if(j!=0){
                j = lps[j - 1];
            }
            else{
                i = i + 1;
            }
        }
       

    }
}

int main(){
    string txt = "Hello This is World of AI and I am learning DataStructure and Algorithm.";
    string pat;
    cin >> pat;
    KMPSearch(txt, pat);
}