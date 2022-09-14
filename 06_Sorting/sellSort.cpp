#include<iostream>
using namespace std;

void sellSort(int arr[], int n){
    for (int i = n / 2; i >= 0;i /= 2){
        for (int j = i; j < n;j++){
            for (int k = j - i; k >= 0;k=k-i){
                if(arr[k+i] >= arr[k]){
                    break;
                }
                else{
                    swap(arr[k+i], arr[k]);
                }
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sellSort(arr, n);
    for (int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}