#include <iostream>
using namespace std;

int maxDiff(int a[], int n){
    int res = a[1] - a[0], minV = a[0];
    for (int i = 1; i < n;i++){
        res = max(res, a[i] - minV);
        minV = min(minV, a[i]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << maxDiff(a, n);
}