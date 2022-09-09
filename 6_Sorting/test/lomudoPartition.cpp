#include<iostream>
using namespace std;

void lPartition(int arr[],int l, int n){
    // swap(arr[p], arr[n - 1]);
    int p = arr[n - 1];
    int j=l;
    for (int i = j; i < n;i++){
        if(arr[i] < p){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[p]);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }
    // int p;
    // cin >> p;
    lPartition(arr,0, n);
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}