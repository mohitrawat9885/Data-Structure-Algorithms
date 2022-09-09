#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int in=l;
    for(int i=l;i<=h;i++){
        if(arr[i] < pivot) swap(arr[in++], arr[i]);
    }
    swap(arr[in], arr[h]);
    return in;
}

void sort(int arr[], int l, int h){
    if(l<h){
        int part = partition(arr, l, h);
        sort(arr, l, part-1);
        sort(arr, part+1, h);
    }
}
    
int main(){
    int arr[] = {10,9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(*arr);

    sort(arr,0,  n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}