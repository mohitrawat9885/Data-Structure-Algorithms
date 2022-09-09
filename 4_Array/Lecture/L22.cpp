#include<iostream>
using namespace std;

int maxSumSubArray(int a[], int n){
    int max = 0, sum=0;
    for (int i = 1; i <= n;i++){
        for (int j = 0; j <= n - i;j++){
            sum = 0;
            for (int k = j; k < j + i;k++){
                sum += a[k];
            }
            cout << sum << endl;
            if(sum > max || (max == 0 && sum < 0)){
                max = sum;
            }  
        }
    }
    return max;
}

int maxSumSubArray2(int a[], int n){
    int res = a[0];
    for (int i = 0; i < n;i++){
        int sum = 0;
        for (int j = i; j < n;j++){
            sum += a[j];
            res = max(res, sum);
        }
    }
    return res;
}

int maxSumSubArray3(int a[], int n){
    int res = a[0], maxE=a[0];
    for (int i = 0; i < n;i++){
        maxE = max((maxE + a[i]), a[i]);
        res = max(res, maxE);
    }
    return res;
}

int main(){
    int n = 7;
    int a[] = {-5, 1, -2, 3, -1, 2, -2};
    cout << maxSumSubArray3(a, n);
}