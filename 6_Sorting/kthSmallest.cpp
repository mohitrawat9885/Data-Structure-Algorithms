#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[], int l, int h){
    int p = h;
    int j = l;
    for (int i = l; i <= h;i++){
        if(arr[i] < arr[p]){
            swap(arr[i], arr[j++]);
        }
    }
    swap(arr[p], arr[j]);
    return j;
}
int kthSmallest(int arr[], int n, int k){
    int l = 0, r = n - 1;
    while(l<=r){
        int p = partition(arr, l, r);
        if(p == k-1){
            return arr[p];
        }
        if(p < k-1){
            l = p + 1;
        }
        else{
            r = p - 1;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << kthSmallest(arr, n, k);
}