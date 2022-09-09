#include<iostream>
using namespace std;

int trapRainWater(int a[], int n){
    int trap = 0, lmax[n], rmax[n];
    lmax[0] = a[0];
    for (int i = 1; i < n;i++){
        lmax[i] = max(lmax[i - 1], a[i]);
    }
    rmax[n - 1] = a[n - 1];
    for (int i = n-2; i >= 0;i--){
        rmax[i] = max(rmax[i+1], a[i]);
    }

    for (int i = 0; i < n;i++){
        trap += min(lmax[i], rmax[i]) - a[i];
    }
        return trap;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << trapRainWater(a, n);
}