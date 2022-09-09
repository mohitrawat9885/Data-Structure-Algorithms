#include<bits/stdc++.h>
using namespace std;


void sumProduct(int n){
    long long int s = 0, p=1;
    for(int i=1;i<=n;i++){
        p *= i;
        s += i;
    }
    cout<<"Sum = "<<s<<" Prio = "<<p<<" is "<<(p%s == 0);
}

int main(){
int n = 8;
sumProduct(n);
}