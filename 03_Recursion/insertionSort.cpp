#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++)
        int j=i;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j--], arr[j-1]);
        }
    }
}

void sort(int arr[], int n, int i=1){
    if(i > n-1) return;

int j=i;
    while(j != 0 && arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    sort(arr, n, i+1);
}

int main(){
    int arr[] = {5, 2, 8, 1, 10, 6, 12, 15};
    int n = sizeof(arr)/sizeof(*arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}