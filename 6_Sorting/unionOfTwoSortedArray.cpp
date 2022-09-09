#include<iostream>
using namespace std;

void printUnion(int arr[], int brr[], int n, int m){
    int i = 0, j = 0;
    while(i<n || j<m){
        if(i>0 && i<n && arr[i] == arr[i-1]){
            i++;
            continue;
        }
        if(j>0 && j<m && brr[j] == brr[j-1]){
            j++;
            continue;
        }
        if(arr[i] == brr[j] ){
            cout << arr[i] << " ";
            i++;
            j++;
            continue;
        }
        if(j>=m || arr[i] < brr[j] && i<n){
            cout << arr[i] << " ";
            i++;
        }
        else if(i>=n || brr[j] < arr[i] && j<m){
            cout << brr[j] << " ";
            j++;
        } 
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < m;i++){
        cin >> brr[i];
    }

    printUnion(arr, brr, n, m);
}