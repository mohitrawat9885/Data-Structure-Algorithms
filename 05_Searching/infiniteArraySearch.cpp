#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k, int low, int high){
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int infiniteSearch(int arr[], int n, int k){
    if(arr[0] == k)
        return 0;
    int i = 1;
    while(arr[i] < k ){
        i = i * 2;
        if(arr[i] == k)
            return i;
    }
    return binarySearch(arr, n, k, i / 2, i-1);
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
    cout << infiniteSearch(arr, n, k);
}