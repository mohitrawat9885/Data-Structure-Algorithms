#include<iostream>
using namespace std;

int main(){
    int N=10, P=9;
    int arr[] = {2, 3, 2, 3, 5, 6, 6, 8, 3, 9};

    for(int i=0;i<N;i++){
            arr[i] -= 1;
        }
        for(int i=0;i<N;i++){
            
            cout<<arr[arr[i]%P]<<" ";
            arr[arr[i]%P] += P;
        }
        for(int i=0;i<N;i++){
            arr[i] /=P;
        }
        // for(int i=0;i<N;i++){
        //     cout<<arr[i]<<" ";
        // }
}