#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for (int i = 0; i < n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << (isSorted(arr, n) == 1)? "Yes":"No";
}