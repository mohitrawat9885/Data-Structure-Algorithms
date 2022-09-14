#include<iostream>
using namespace std;


int getSum(int s, int e){
    int n = 7;
    int a[n] = {2, 8, 3, 9, 6, 5, 4};
    int sum[n] = {2, 10, 13, 22, 28, 33, 37};
    if(s == 0){
        return sum[e];
    }
    return sum[e] - sum[s - 1];
}

int isEqPoint(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n;i++){
        if(l_sum == sum-a[i]){
            return i+1;
        }
        l_sum += a[i];
        sum -= a[i];
    }
    return false;
}

int main(){
    int a[] = {1, 3, 5, 2, 2};
    cout << isEqPoint(a, 5);
    // cout<<getSum(0, 2)<<endl;
    // cout<<getSum(2, 4)<<endl;
    // cout<<getSum(3,6)<<endl;
}