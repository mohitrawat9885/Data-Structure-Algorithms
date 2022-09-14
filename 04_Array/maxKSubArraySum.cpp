#include<iostream>
using namespace std;

int maxKSubArraySum(int a[], int n, int k){
    int res = 0, sum = 0;
    for (int i = 0; i < n;i++){
        if(i<k){
            sum += a[i];
            continue;
        }
        if(i>=k){
            sum = sum + a[i] - a[i - k];
        }
        res = max(res, sum);
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >>a[i];
    }
    int k;
    cin >> k;
    cout << maxKSubArraySum(a, n, k);
}