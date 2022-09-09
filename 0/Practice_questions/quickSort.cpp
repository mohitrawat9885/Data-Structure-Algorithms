#include<iostream>
using namespace std;

int partition(int arr[], int n){
    int p = n;
    int j = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] < arr[p]){
            swap(arr[i], arr[j++]);
        }
    }
    swap(arr[j], arr[p]);
        return j;
}

void quickSort(int arr[], int l, int r){
    if(l<=r){
        int p = partition(arr, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}