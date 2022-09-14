#include<iostream>
using namespace std;

void frequency(int arr[], int n){
    int f = 1;
    for (int i = 1; i < n;i++){
        if(arr[i] == arr[i-1]){
            f++;
            continue;
        }
        cout << f << " ";
        f = 1;
    }
    cout << f;
}

int main(){
    int n = 13;
    int arr[n] = {10, 10, 10, 25, 30, 30, 30, 40, 50, 50, 50, 50, 60};
    frequency(arr, n);
}