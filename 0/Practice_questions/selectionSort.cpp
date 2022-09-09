#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n;i++){
        int j = i+1;
        int min_ind = i;
        for (; j < n;j++){
            if(arr[min_ind] > arr[j]){
                min_ind = j;
            }
        }
        swap(arr[min_ind], arr[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}