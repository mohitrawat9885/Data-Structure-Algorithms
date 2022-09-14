#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int l, int r){
    if(l>r) return false;
    int m = (l+r)/2;
    if(arr[m] == k) return true;
    if(arr[m] < k) return binarySearch(arr, k, m+1, r);
    return binarySearch(arr, k, l, m-1);
}



int main(){
    int arr[] = {10, 15, 16, 20, 25, 27, 30, 35, 38, 40};
    int n = sizeof(arr) / sizeof(*arr);
    int k = 17;
    cout<<(binarySearch(arr, k , 0,  n-1));
}