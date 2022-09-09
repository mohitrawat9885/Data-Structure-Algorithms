#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int start, int mid, int end){
    int res[end - start + 1];
    int i1 = start, n1 = mid, i2 = mid+1, n2 = end;
    int i=0;
    while(i1 <= n1 && i2 <= n2){
        if(arr[i1] < arr[i2]){
            res[i++] = arr[i1++];
        }
        else{
            res[i++] = arr[i2++];
        }
    }
    while(i1<=n1){
        res[i++] = arr[i1++];
    }
    while(i2<=n2){
        res[i++] = arr[i2++];
    }
    i=0;
    for(int j=start;j<=end;j++){
        arr[j] = res[i++];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start>= end) return;

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {10, 9, 8, 7, 6 , 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(*arr);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}