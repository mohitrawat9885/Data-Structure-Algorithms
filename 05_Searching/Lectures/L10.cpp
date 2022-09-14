#include<iostream>
using namespace std;

int searchMe(int arr[], int n, int k){
    int start = 0, end = n, mid;
    while(start<=end){
        mid = (start + end) / 2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[start] < arr[mid]){
            if(k >= arr[start] && k < arr[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else{
            if(k > arr[mid] && k <= arr[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int n = 10;
    int arr[10] = {40, 50, 60, 70, 80, 90, 100, 10, 20, 30};
    int k;
    cin >> k;
    cout << searchMe(arr, n, k);
}