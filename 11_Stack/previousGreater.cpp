#include<iostream>
#include<stack>
using namespace std;

void previousGreater(int arr[], int n){
    stack<int>s;
    cout << -1<<" ";
    s.push(arr[0]);
    for (int i = 1; i < n;i++){
        while(!s.empty() && s.top() < arr[i]){
            s.pop();
        }
        cout << ((s.empty()) ? -1 : s.top())<<" ";
        s.push(arr[i]);
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    previousGreater(arr, n);
}