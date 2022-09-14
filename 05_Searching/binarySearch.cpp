#include<iostream>
using namespace std;

int binarySearch(int arr[], int n,int k){
    int low = 0, high = n - 1, mid;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] < k){
            low = mid + 1;
        }
        else if(arr[mid] > k){
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << binarySearch(arr, n, k);
    return 0;
}