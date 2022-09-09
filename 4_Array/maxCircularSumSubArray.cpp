#include<iostream>
using namespace std;

int subArraySum(int a[], int n){
    int res = a[0], maxSum = a[0];
    for (int i = 1; i < n;i++){
        maxSum = max(maxSum + a[i], a[i]);
        res = max(maxSum, res);
    }
    return res;
}

int maxCircularSumSubArray(int a[], int n){
    int normaxSum = subArraySum(a, n);
    if(normaxSum < 0)
        return normaxSum;
    int sum_arr = 0;
    for (int i = 0; i < n;i++){
        sum_arr += a[i];
        a[i] *= -1;
    }
    int circularSum = sum_arr + subArraySum(a, n);
    return max(circularSum, normaxSum);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << maxCircularSumSubArray(a, n);
}