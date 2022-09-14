#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){
    int a=0, minIndex;
    for(int i=0;i<n;i++){
        minIndex = i;
        for(int j=i;j<n;j++){
            minIndex = arr[minIndex] < arr[j] ? minIndex : j;
        }
        swap(arr[a++], arr[minIndex]);
        
    }
}

void mySort(int arr[],int n){
    if(n <= 1) return;

    int m = 0;
    for(int j=1;j<n;j++){
        m = arr[m] < arr[j] ? m : j;
    }
    swap(arr[0], arr[m]);
    mySort(arr+1,  n-1);
}

int main(){
    int arr[] = {5, 2, 8, 1, 10, 6, 12, 15};
    int n = sizeof(arr)/sizeof(*arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mySort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}