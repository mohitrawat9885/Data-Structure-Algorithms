#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int start = 0, end = n, mid;
    while (start<=end)
    {
        mid = (start + end) / 2;
        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k<arr[mid]){
            end = mid - 1;
        }
        else {
            if(mid == n-1 || arr[mid+1] != k){
                cout << mid;
                return 0;
            }
            start = mid + 1;
        }
    }
}