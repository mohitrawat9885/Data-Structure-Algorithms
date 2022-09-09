#include<iostream>
using namespace std;

int subArraysWithSumk(int a[], int n, int k){
    int sum = a[0], res=a[0];
    for (int i = 0; i < n;i++){
        sum = max(sum + a[i], a[i]);
        // cout << sum << endl;
        cout << sum << endl;
        // res = max(res, sum);
        // cout << res<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    subArraysWithSumk(a, n, k);
}
