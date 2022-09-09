#include<iostream>
using namespace std;

int majorityElement(int arr[], int n){
    int count = 0, k;
    for (int i = 1; i < n;i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            count--;
            if(count < 0){
            count = 0;
        }
        }
        if(count > 1){
            k = arr[i];
        }
    }
    count = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] == k){
            count++;
        }
    }
    if(count >= n/2){
        return k;
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
    cout << majorityElement(arr, n);
}