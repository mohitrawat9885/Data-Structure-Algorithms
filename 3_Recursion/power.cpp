#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    if(b == 0) return 1;
    if(b == 1) return a;

    if(b%2 == 0){
        int ans = power(a, b/2);
        return ans * ans;
    }
    return a*power(a, b-1);
}
int main(){
    int a=2, b=4;
    cout<<power(a,b);
}