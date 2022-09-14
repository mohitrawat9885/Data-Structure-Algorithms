#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n;i++){
    //     cin >> arr[i];
    // }
    // sort(arr, arr+n);
    // for (int i = 0; i < n;i++)
    // {
    //     cout << arr[i]<< " ";
    // }
    // sort(arr, arr + n, greater<int>());
    // cout << endl;
    // for (int i = 0; i < n;i++)
    // {
    //     cout << arr[i]<< " ";
    // }

    vector<int> v = {5, 2, 9, 4, 7, 10, 3};
    sort(v.begin(), v.end());
    for (int i = 0; i < 7;i++){
        cout << v[i] << " ";
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << endl;
    for (int i = 0; i < 7;i++){
        cout << v[i] << " ";
    }
}