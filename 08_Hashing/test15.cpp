#include<iostream>
#include<unordered_map>
using namespace std;

int numberOfSubArray(int arr[], int n, int s){
    unordered_map<int, int> um;
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    cout << numberOfSubArray(arr, n, s);
}