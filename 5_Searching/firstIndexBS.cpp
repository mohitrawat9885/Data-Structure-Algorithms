#include<iostream>
using namespace std;

int firstIndexBS(int arr[], int n, int k){
    int low = 0, hi = n - 1, mid;
    while(low<=hi){
        mid = (low + hi) / 2;
        if(arr[mid] < k){
            low = mid + 1;
        }
        else if(arr[mid] > k){
            hi = mid - 1;
        }
        else{
            if(mid == 0|| arr[mid-1] != k){
                return mid;
            }
            hi = mid - 1;
        }
    }
    return -1;
}

int firstIndexBS2(int arr[], int n, int k, int low, int hi){
    if(low>hi){
        return -1;
    }
    int mid = (low + hi) / 2;
    if(arr[mid] < k){
        return firstIndexBS2(arr, n, k, mid + 1, hi);
    }
    else if(arr[mid] > k){
        return firstIndexBS2(arr, n, k, low, mid-1);
    }
    else{
        if(mid == 0|| arr[mid-1] != k){
            return mid;
        }
        return firstIndexBS2(arr, n, k, low , mid-1);
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
    cout << firstIndexBS2(arr, n, k, 0, n-1);
}