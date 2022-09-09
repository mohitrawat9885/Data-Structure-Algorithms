#include<iostream>
using namespace std;

void leftRotate(int arr[], int n, int k){
    int i, t;
    for (int j = 0; j < k;j++){
        t = arr[0];
    for (i = 0; i < n-1;i++){
        arr[i] = arr[i + 1];
    }
    arr[i] = t;
    } 
    for (i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}
void leftRotate2(int arr[], int n, int d){
    int t = d;
    for (int i = 0; i < (n - t);i++){
        // if((d+i) == n){
        //     d=1;
        // }
        swap(arr[i], arr[i + d]);
    }
     for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

 void reverse(int arr[], int start, int end){
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}



void leftRotate3(int arr[], int n, int d){

   
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n = 7,k,  i;
    cin >> k;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate3(arr, n, k);
}