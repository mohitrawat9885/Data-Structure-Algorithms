#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n){
    if(n <= 0 ) return 0;
    if(n == 1) return 1;
    return numberOfWays(n-1) + numberOfWays(n-2);
}

int main(){
    int n = 5;
    cout<<numberOfWays(n);
}