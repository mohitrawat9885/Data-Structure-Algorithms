#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
    if(n == 1)
        return arr[0];
    if(arr[0] >= arr[1]){
        return arr[0];
    }
    for (int i = 1; i < n - 1;i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
        }
    }
    if(arr[n-1] >= arr[n-2]){
        return arr[n - 1];
    }
}
int peakElement2(int arr[], int n){
    int low = 0, hi = n - 1;
    
    while(low<=hi){
        int mid = (low + hi) / 2;
        if(arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid-1] > arr[mid]){
            hi = mid - 1;
        }
        else if(arr[mid+1] > arr[mid]){
            low = mid + 1;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << peakElement2(arr, n);
}