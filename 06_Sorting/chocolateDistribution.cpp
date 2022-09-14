#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int minDiff(int arr[], int n, int c){
    sort(arr, arr + n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int minD = INT_MAX;
    for (int i = 0; i <= (n - c);i++){
        minD = min(arr[i + c - 1] - arr[i], minD);
    }
    return minD;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int c;
    cin >> c;
    cout << minDiff(arr, n, c);
}