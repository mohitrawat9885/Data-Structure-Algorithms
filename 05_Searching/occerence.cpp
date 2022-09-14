#include<iostream>
using namespace std;

int occerence(int arr[], int n, int k){
    int low = 0, high = n - 1, mid, f, l;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] < k){
            low = mid + 1;
        }
        else if(arr[mid] > k){
            high = mid - 1;
        }
        else {
            if(mid == 0|| arr[mid-1] != k){
                f = mid;
                break;
            }
            high = mid - 1;
        }
    }

    low = 0, high = n - 1;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] < k){
            low = mid + 1;
        }
        else if(arr[mid] > k){
            high = mid - 1;
        }
        else {
            if(mid == n-1|| arr[mid+1] != k){
                l = mid;
                break;
            }
            low = mid + 1;
        }
    }
    return (l - f)+1;
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
    cout<<occerence(arr, n, k);
}