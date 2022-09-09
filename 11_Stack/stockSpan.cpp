#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int arr[], int n){
    stack<int> s;
    cout << "1"
         << " ";
    s.push(0);
    for (int i = 1; i < n;i++){
        while(i!= n-1 && !s.empty() && arr[s.top()] < arr[i]){
            s.pop();
        }
        cout << ((s.empty()) ? i + 1 : i - s.top()) << " ";
        s.push(i);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    stockSpan(arr, n);
}