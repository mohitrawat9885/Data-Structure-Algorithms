#include<iostream>
using namespace std;

int maxProfit(int a[], int n){
    int p = 0;
    for (int i = 1; i < n;i++){
        if(a[i] > a[i-1]){
            p += a[i] - a[i - 1];
        }
    }
    return p;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout<<maxProfit(a, n);
}