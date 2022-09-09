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

    int start = 0, end = n, mid, s=0, e=0;
    while(start<=end){
        mid = (start + end) / 2;
        // cout << "start = " << start<<" mid = "<<mid << " end = "<<end << endl;
        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
        else {
            if(mid == 0 || arr[mid-1] != k){
                s = mid;
                break;
            }
            end = mid - 1;
        }
    }
    start = 0;
    end = n;
    while(start<=end){
        mid = (start + end) / 2;
        if(k < arr[mid]){
            end = mid - 1;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else {
            if(mid == n-1 || arr[mid+1] != k){
                e = mid;
                break;
            }
            start = mid + 1;
        }
    }
    cout << (e - s) + 1;
}