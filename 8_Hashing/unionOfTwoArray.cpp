#include<iostream>
#include<unordered_set>
using namespace std;

int unionOfTwoArray(int arr[], int n, int brr[], int m){
    unordered_set<int> us;
    for (int i = 0; i < n;i++){
        us.insert(arr[i]);
    }
    for (int i = 0; i < m;i++){
        us.insert(brr[i]);
    }
    return us.size();
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int m;
    cin>>m;
    int brr[m];
    for (int i = 0; i < m;i++){
        cin >> brr[i];
    }
    cout << unionOfTwoArray(arr, n, brr, m);
}