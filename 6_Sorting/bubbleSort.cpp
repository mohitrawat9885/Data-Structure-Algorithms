#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n;i++){
        bool swaped = false;
        for (int j = 0; j < n - 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if(!swaped){
            break;
        }
    }
    for(auto i: arr){
        cout << i << " ";
    }
}