#include<iostream>
using namespace std;

int maxProfit(int arr[], int n){
    int buy = 0, profit = 0, i;

    for (i = 0; i < n-1;i++){
        if(arr[i+1] > arr[i] && buy == 0){
            buy = arr[i];
        }
        else if(buy != 0 && arr[i+1] < arr[i]){
            profit += arr[i] - buy;
            buy = 0;
        }
    }
     if(buy != 0 && i == (n-1)){
            profit += arr[i] - buy;
            buy = 0;
        }
    return profit;
}

int maxProfit2(int arr[], int n){
    int profit = 0;
    for (int i = 1; i < n;i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i] - arr[i - 1];
            cout << i << " " << i - 1 << endl;
        }
    }
    return profit;
}

int main(){
    int n;
    // int arr[n] = {1, 5, 3, 1, 2, 8};
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
        // int arr[n] = {1, 5, 3, 8, 12};
        //int arr[n] = {30, 20, 10};
         cout << maxProfit(arr, n)<<endl;
        cout << maxProfit2(arr, n);
}