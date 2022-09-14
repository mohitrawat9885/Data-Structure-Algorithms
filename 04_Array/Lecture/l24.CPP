#include<iostream>
using namespace std;

int maxCircularSubArray(int a[], int n){
    int res = a[0];
    for (int i = 0; i < n;i++){
        int curr_max = a[i];
        int curr_sum = a[i];
        for (int j = 1; j < n;j++){
            int index = (i + j) % n;
            curr_sum += a[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

/// second method

int normalMaxSum(int arr[], int n){
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n;i++){
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int overallMaxSum(int arr[], int n){
    int max_normal = normalMaxSum(arr, n);
    if(max_normal < 0){
        return max_normal;
    }
    int arr_sum = 0;
    for (int i = 0; i < n;i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}

int main(){
    int n;
    cin >>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << maxCircularSubArray(a, n);
}