#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i < n;i++){
        int j = i;
        int t = arr[i];
        while (arr[j-1] > t && j)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = t;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}