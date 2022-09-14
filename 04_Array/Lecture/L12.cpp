#include<iostream>
using namespace std;

void zeroToEnd(int arr[], int n){
    int p = -1;
    for (int i = 0; i < n;i++){
        if(arr[i] != 0 && p != -1){
            arr[p++] = arr[i];
            arr[i] = 0;
        }
        if(arr[i] == 0 && p == -1){
            p = i;
        }
    }
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

void zeroToEnd2(int arr[], int n){
    int p = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] != 0){
            swap(arr[i], arr[p]);
            p++;
        }
    }
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 10;
    int arr[n] = {2, 4, 6, 0, 9, 5, 0, 5, 10, 23};
    zeroToEnd2(arr, n);
}