#include<iostream>
using namespace std;

int lastIndexBS(int arr[], int n, int k){
    int l = 0, h = n - 1, m;
    while(l<=h){
        m = (l + h) / 2;
        if(arr[m] < k){
            l = m + 1;
        }
        else if(arr[m] > k){
            h = m - 1;
        }
        else{
            if(m == n-1 || arr[m+1] != k){
                return m;
            }
            l = m + 1;
        }
    }
}

int lastIndexBS2(int arr[], int n, int k, int l, int h){
    if(l>h){
        return -1;
    }
    int m = (l + h) / 2;
    if(arr[m] < k){
        return lastIndexBS2(arr, n, k, m + 1, h);
    }
    else if(arr[m] > k){
        return lastIndexBS2(arr, n, k, l, m-1);
    }
    else{
        if(m == n-1 || arr[m+1] != k){
            return m;
        }
        return lastIndexBS2(arr, n, k, m + 1, h);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << lastIndexBS2(arr, n, k, 0, n-1);
}