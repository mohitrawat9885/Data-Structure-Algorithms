#include<iostream>
using namespace std;

int findElement(int arr[], int n,int k,  int start, int end){
    int mid = (start+end)/2;
    if(arr[mid] == k){
        return 1;
    }
    if(start > end){
        return -1;
    }
    if(k > arr[mid]){
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }
    return findElement(arr, n, k, start, end);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int k;
    
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cin >> k;

    cout << findElement(arr, n,k , 0, n);
}