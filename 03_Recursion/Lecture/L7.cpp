#include<iostream>
using namespace std;

int fun(int n, int k){
    if(n == 1){
        return k;
    }
    return fun(n - 1, k * n);
}
int main(){
    int n;
    cin >> n;
    cout<<fun(n, 1);
}