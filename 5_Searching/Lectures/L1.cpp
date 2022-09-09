#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main2(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N;i++){
        cin >> arr[i];
    }
    int K;
    cin >> K;

    int start = 0, end = N, mid;
    
       while(start >= end){
           mid = (start+end)/2;

           if(K == arr[mid]){
               cout<< mid + 1;
               return 0;
           }
           if(K > arr[mid]){
               start = mid ;
           }
           else if(K<arr[mid]){
               end = mid - 1;
           }
       }
       
}

int main(){
    int n = 4;
    int arr[] = {1, 2, 3, 4};
    int x = 4;
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            cout<< i;
            break;
        }
    }
    cout << -1;
}

