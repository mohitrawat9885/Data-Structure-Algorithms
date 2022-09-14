#include<iostream>
using namespace std;

int maxSumSunArray(int a[], int n){
    int maxSum = a[0], res=a[0];
    for (int i = 1; i < n;i++){
        maxSum = max(maxSum + a[i], a[i]);
        res = max(maxSum, res);
        // cout << maxSum << endl;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << maxSumSunArray(a, n);
}