#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void sort(int arr[], int n){
    if(n == 0 || n == 1) return;

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sort(arr, n-1);
}



int main(){
    int arr[] = {10, 12, 15, 6, 3, 9, 2, 10, 7,10, 3,  4};
    int n = sizeof(arr) / sizeof(*arr);
    bubbleSort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}