#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long double d = 0;
    for (int i = 1; i <= n;i++){
        d += log10(i);
    }
    d = floor(d) + 1;
    cout << d;
}