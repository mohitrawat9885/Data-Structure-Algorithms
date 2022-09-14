#include<iostream>
using namespace std;

void leaderNumber(int arr[], int n){
    int i, j;
    for (int i = 0; i < n-1;i++){
        for (j = i + 1; j < n;j++){
            if(arr[i] <= arr[j])
                break;
        }
        if(j==n){
            cout << arr[i] << " ";
        }
    }
    cout << arr[n - 1];
}

void leaderNumber2(int arr[], int n){
    int t = arr[n-1];
    cout << t << " ";
    for (int i = n - 2; i >= 0;i--){
        if(arr[i] > t){
            t = arr[i];
            cout << t << " ";
        } 
    }
}

int main(){
    int n = 10;
    int arr[n] = {4, 7, 3, 9, 10, 34, 20, 3, 4, 9};
    int arr2[7] = {7, 10, 4, 10, 6, 5, 2};
    leaderNumber2(arr2, 7);
}