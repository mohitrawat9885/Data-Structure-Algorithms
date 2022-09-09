#include<iostream>
using namespace std;

int merge(int arr[], int l, int m, int h){
    int x = m - l+1, y = h - m;
    int arr1[x];
    int arr2[y];
    for (int i = 0; i < x;i++){
        arr1[i] = arr[i + l];
    }
    for (int i = 0; i < y;i++){
        arr2[i] = arr[i + m+1];
    }
    int i = 0, j = 0, k=l, res=0;
    while(i<x && j<y){
        if(arr1[i] <= arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
            res = res + (x-i);
        }
    }
    while(i<x){
        arr[k++] = arr1[i++];
    }
    while(j<y){
        arr[k++] = arr2[j++];
    }
    return res;
}
int  mergeSort(int arr[],int l, int h){
    int res = 0;
    if(l<h){
        int m = (l+h)/2;
        res += mergeSort(arr, l, m);
        res += mergeSort(arr, m + 1, h);
        res += merge(arr, l, m,  h);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << mergeSort(arr, 0, n - 1) << endl;
    for (int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}