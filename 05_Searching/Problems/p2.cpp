#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N;i++){
        cin >> arr[i];
    }
    int K;
    cin >> K;

    int start = 0, end = N, mid = N/2;
    
       while(1){
           if(K == arr[mid]){
              
               cout<< mid;
               break;
           }
           if(K > arr[mid]){
               start = mid;
               mid = (start + end)/2;
           }
           else if(K<arr[mid]){
               end = mid;
               mid = (start+end)/2;
           }
           if(mid == start || mid == end){
               break;
           }
       }
       
}