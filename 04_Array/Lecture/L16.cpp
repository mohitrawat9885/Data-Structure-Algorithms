#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int j, i;
    j = arr[0];
    i = j;
    for (int k = 1; k < n;k++){
        if(arr[k] > j){
            if(j < i){
                i = j;
            }
            j = arr[k];
        }
    }
    return j - i;
}
int maxDiff2(int arr[], int n){
    int m = arr[1] - arr[0];
    int i = arr[0];
    for (int j = 1; j < n;j++){
        m = max(m, (arr[j] - i));
        i = min(i, arr[j]);
    }
    return m;
}
int main(){
    int n = 4;
    // int arr[n] = {30, 10, 8, 2};
    int arr[n] = {2, 3, 10, 6, 4, 8, 1};
    cout << maxDiff2(arr, n);
}