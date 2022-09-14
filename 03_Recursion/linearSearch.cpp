#include<bits/stdc++.h>
using namespace std;


bool linearSearch(int *arr, int n, int k){
    if(n == 0) return false;
    return arr[0] == k || linearSearch(arr+1, n-1, k);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(*arr);
    int k = 7;
   cout<<linearSearch(arr, size, k);
}