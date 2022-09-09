#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // int tem[n], min_ind, i;
    // for (i = 0; i < n;i++){
    //     min_ind = i;
    //     for (int j = 0; j < n;j++){
    //         if(arr[j] < arr[min_ind]){
    //             min_ind = j;
    //         }
    //     }
    //     tem[i] = arr[min_ind];
    //     arr[min_ind] = INT_MAX;
    // }
    // for (i = 0; i < n;i++){
    //     arr[i] = tem[i];
    // }

    int min_ind = 0;
    for (int i = 0; i < n-1;i++){
        min_ind = i;
        for (int j = i+1; j < n;j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
}