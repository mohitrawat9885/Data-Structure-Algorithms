#include<iostream>
using namespace std;

int ropeCutting(int n, int a, int b, int c){
    if(n < 0){
        return -1;
    }
    else  if(n == 0){
        return 0;
    }
    int rope = max(
        max(
            ropeCutting(n - a, a, b, c),
            ropeCutting(n - b, a, b, c)),
        ropeCutting(n - c, a, b, c));
    
    if(rope == -1){
        return -1;
    }
    else
        return 1 + rope;
}

int main(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout<<ropeCutting(n, a, b, c);
    
}