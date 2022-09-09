#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int t;
    for (int i = 0; i < (n / 2);i++){
        t = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = t;
    }
    
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 9, 8, 7, 6};
    reverse(arr, 10);
}