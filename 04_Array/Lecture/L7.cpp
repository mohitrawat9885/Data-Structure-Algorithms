#include<iostream>
using namespace std;

int getLargest(int arr[],int n){
    int t = arr[0];
    for (int i = 0; i < n;i++){
        if(arr[i] > t)
            t = arr[i];
    }
    return t;
}
int main(){
    int n = 4;
    int arr[n] = {10, 5, 20, 8};
    cout<<getLargest(arr, n);
}