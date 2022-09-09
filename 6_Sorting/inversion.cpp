#include<iostream>
using namespace std;

int merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1;i++){
        a[i] = arr[i + l];
    }
    for (int i = 0; i < n2;i++){
        b[i] = arr[m + i + 1];
    }

    int i = 0, j = 0, k = l, res = 0;
    while(i!=n1 && j!=n2){
        if(a[i] <= b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
            res = res + (n1 - i);
        }
    }
    while(i!=n1){
        arr[k++] = a[i++];
    }
    while(j!=n2){
        arr[k++] = b[j++];
    }
    return res;
}


int sort(int arr[], int l, int r){
    int res = 0;
    if(l<r){
        int m = (l+r)/2;
        res += sort(arr, l, m);
        res += sort(arr, m + 1, r);
        res += merge(arr, l, m, r);
    }
    return res;
}

int mergeSort(int arr[], int n){
    return sort(arr, 0, n - 1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout<<mergeSort(arr, n)<<endl;
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}