#include<iostream>
using namespace std;
void removeDuplicate(int arr[], int n){
    int t = arr[0], ind=n;
    for (int i = 1; i < n;i++){
        if(arr[i] == t){
            ind--;
            arr[i] = 0;
        }
        else
            t = arr[i];
    }
    int p = -1;

    for (int i = 0; i < n;i++){
        if(arr[i] == 0 && p == -1){
            p = i;
        }
        if(arr[i] != 0 && p > -1){
            arr[p] = arr[i];
            p++;
        }
    }
    for (int i = 0; i < ind;i++){
        cout << arr[i] << " ";
    }
}
void removeDuplicate2(int arr[], int n){
    int p=1;
    for (int i = 1; i < n;i++){
        if(arr[i] != arr[i-1]){
            arr[p++] = arr[i];
        }
    }
    for (int i = 0; i <p;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {10, 20, 20, 20, 30, 30, 30, 30, 40, 50, 50, 60, 70, 70};
    removeDuplicate2(arr, 14);
}