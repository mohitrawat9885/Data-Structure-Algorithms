#include<iostream>
using namespace std;

int getPartition(int arr[], int n, int mid){
    int sum=0, part = 1;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum > mid){
            sum = arr[i];
            part++;
        }
    }
    return part;
}

int findMinTime(int arr[], int n, int m){
    int l = 0, h = 0;
    for(int i=0;i<n;i++){
        l = max(l, arr[i]);
        h += arr[i];
    }

    while(l<=h){
        int mid = (h+l)/2;
        int part = getPartition(arr, n, mid);
        if(part <= m){
            h = mid - 1;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main(){
    int arr[] = {3, 7, 4, 8, 9, 6, 5};
    int n = sizeof(arr) / sizeof(*arr);
    int m = 3;
    cout<<findMinTime(arr, n, m);
}