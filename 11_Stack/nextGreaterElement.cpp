#include<iostream>
#include<stack>
using namespace std;

void nextGreaterElement(int arr[], int n){
    stack <int>s;
    stack <int>res;
    res.push(-1);
    s.push(arr[n - 1]);
    for (int i = n - 2; i >= 0;i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        int r = s.empty() ? -1 : s.top();
        res.push(r);
        s.push(arr[i]);
    }
    for (int i = 0;i<n;i++){
        cout << res.top() << " ";
        res.pop();
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    nextGreaterElement(arr, n);
}