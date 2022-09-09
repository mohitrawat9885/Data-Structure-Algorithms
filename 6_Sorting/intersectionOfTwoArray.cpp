#include<iostream>
using namespace std;

void intersections(int arr[], int brr[], int n, int m){
    int i = 0, j = 0;
    while(i!=n || j!=m){
        if(arr[i] == brr[j]){
            cout << arr[i] << " ";
            while(arr[i] == brr[j]){
                i++;
        }
        j++;
        }
        else if(arr[i] < brr[j] ){
            i++;
        }
        else if(brr[j] < arr[i]){
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

    intersections(arr, brr, n, m);
}