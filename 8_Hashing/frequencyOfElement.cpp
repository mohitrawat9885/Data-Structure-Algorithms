#include<iostream>
#include<unordered_map>
using namespace std;


void frequencyOfElements(int arr[], int n){
    unordered_map<int, int> um;
    for (int i = 0; i < n;i++){
        um[arr[i]]++;
    }
    for(auto i: um){
        cout << i.first << " " << i.second << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    frequencyOfElements(arr, n);
}