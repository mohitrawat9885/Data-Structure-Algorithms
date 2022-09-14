#include<iostream>
using namespace std;

int sortedRotedSearch(int arr[], int n, int k){
    int low = 0, hi = n - 1;
    while(low<=hi){
        int mid = (low + hi) / 2;
        if(k == arr[mid]){
            return mid;
        }
        if(arr[low] < arr[mid]){
            if(k < arr[mid] && k >= arr[low]){
                hi = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else
        if(arr[hi] > arr[mid]){
           if(k > arr[mid] && k <= arr[hi]){
               low = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
    }
    return -1;
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
    cout << sortedRotedSearch(arr, n, k);
}