#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr[], int l, int mid, int h){
    int n = mid-l+1;
    int m = h - mid;
    int left[n], right[m];

    for (int i = 0; i < n;i++){
        left[i] = arr[i+l];
    }
    for (int i = 0; i < m;i++){
        right[i] = arr[i + mid+1];
    }

    int i = 0, j = 0, k = l;
    
    while((i!=n) || (j!=m)){
        if(left[i] < right[j] && i<n){
            arr[k++] = left[i++];
        }
        else if(j<m){
            arr[k++] = right[j++];
        }
    }
}

// void merge(int arr[], int l, int m, int h){
//     int n1 = m - l + 1, n2 = h-m;
//     int left[n1], right[n2];
//     for (int i = 0; i < n1;i++){
//         left[i] = arr[i + l];
//     }
//     for (int j = 0; j < n2;j++){
//         right[j] = arr[m + 1 + j];
//     }
//     int i = 0, j = 0, k = l;
//     while(i<n1 && j<n2){
//         if(left[i] <= right[j]){
//             arr[k++] = left[i++];
//         }
//         else{
//             arr[k++] = right[j++];
//         }
//     }
//     while(i<n1){
//         arr[k++] = left[i++];
//     }
//     while(j<n2){
//         arr[k++] = right[j++];
//     }
// }
void mergeSort(int arr[], int l, int r){
    if(r>l){
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main(){
    int n;
    cin>>n;
    // int r, m, l;
    // cin >>r>>m>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    //merge(arr, r, m, l);
    mergeSort(arr, 0, n-1);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}