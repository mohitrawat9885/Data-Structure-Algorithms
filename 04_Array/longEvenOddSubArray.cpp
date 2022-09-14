#include<iostream>
using namespace std;

int longEvenOddSubArray(int a[], int n){
    int count = 1, res = 1;
    for (int i = 1; i < n;i++){
        if((a[i]%2 == 0 && a[i-1]%2 != 0) ||
            (a[i]%2 != 0 && a[i-1]%2 == 0)){
            count++;
            res = max(res, count);
            }
        else {
            count = 1;
        }
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
    cout << longEvenOddSubArray(a, n);
}