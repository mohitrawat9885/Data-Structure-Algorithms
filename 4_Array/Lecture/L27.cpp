#include<iostream>
using namespace std;

int maxSumOfK(int a[], int n, int k){
    int res = -1,sum=0 ;
    for (int i = 0; i < n;i++){
        if(i<k){
            sum += a[i];
            res = sum;
        }
        else{
            sum+=(a[i]-a[i-k]);
            res = max(res, sum);
        }
    }
    return res;
}

int main()
{
    int n = 6, k=3;
    cin >> n>>k;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    //int a[n] = {1, 8, 30, -5, 20, 7};
    cout << maxSumOfK(a, n, k);
    // for(int )
}