#include<iostream>
using namespace std;

// int binarySearch(int arr[], int n, int e){
//     int l = 0, h = n - 1;
//     while(l<=h){
//         int m = (l + h) / 2;
//         if(arr[m] == e){
//             return m;
//         }
//         if(e < arr[m]){
//             h = m - 1;
//         }
//         else{
//             l = m+ 1;
//         }
//     }
// }


// int linearSearch(int arr[], int n, int e){
//     for (int i = 0; i < n;i++){
//         if(arr[i] == e){
//             return i;
//         }
//     }
//     return -1;
// }

int bubbleSort(int arr[], int n){
    for (int i = 0; i < n;i++){
        for (int j = 1; j < n;j++){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}