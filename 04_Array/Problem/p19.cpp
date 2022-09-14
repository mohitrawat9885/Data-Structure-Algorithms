#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[] = {1, 1, 5, 2, 7, 6, 1, 4, 2, 3};
    int res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n;i++){
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n-1] = arr[n - 1];
    for (int i = n-2; i >=0 ;i--){
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < n - 1;i++){
        res += (min(rmax[i], lmax[i]) - arr[i]);
    }
    cout << res;
}