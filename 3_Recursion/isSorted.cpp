#include<bits/stdc++.h>
using namespace std;


bool isSorted(int *arr, int n){
    if(n == 0 || n == 1) return true;
    if(arr[0] > arr[1]) return false;
    return isSorted(arr+1, n-1);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(*arr);
    bool b = isSorted(arr, size);
    if(b) cout<<"Sorted";
    else cout<<"Not Sorted";
}