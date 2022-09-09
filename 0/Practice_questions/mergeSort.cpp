#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n = mid - l+1;
    int m = r - mid;
    int a[n], b[m];
    for (int i = 0; i < n;i++){
        a[i] = arr[l + i];
    }
    for (int i = 0; i < m;i++){
        b[i] = arr[mid + i+1];
    }

    int i = 0, j = 0, k = l;
    while(i != n && j!=m){
        if(a[i] < b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i!=n){
        arr[k++] = a[i++];
    }
    while(j!=m){
        arr[k++] = b[j++];
    }
}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m = (l+r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // int m;
    // cin >> m;
    // merge(arr, 0, m, n - 1);
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}