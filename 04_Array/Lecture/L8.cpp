#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int t = arr[0];
    int t2 = -1;
    for (int i = 0; i < n;i++){
        if(arr[i] > t){
            t2 = t;
            t = arr[i];
            
        }
        if (arr[i] < t && arr[i] > t2)
        {
            t2 = arr[i];
        }
    }
    return t2;
}
int main(){
    int n = 9;
    int arr[n] = {30, 30, 30, 30, 30, 30, 30, 30, 30};
    cout<<secondLargest(arr, n);
}