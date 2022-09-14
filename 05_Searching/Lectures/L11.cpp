#include<iostream>
using namespace std;

int findPeak(int arr[], int n){
    if (n == 1){
        return arr[0];
    }
        if (arr[0] > arr[1])
        {
            return arr[0];
        }
    if(arr[n-1] > arr[n-2]){
        return arr[n - 1];
    }
    for (int i = 1; i < n - 1;i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int findPeak2(int arr[], int n){
    if(n == 1)
        return arr[0];
    if(arr[0] >= arr[1])
        return arr[0];
    if(arr[n-1] >= arr[n-2])
        return arr[n - 1];

    int start = 0, end = n, mid;

    while (start<=end){
        
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << findPeak(arr, n);
}