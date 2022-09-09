#include<bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);
void _getMinAtPop(stack<int> s);

stack<int> _push(int arr[],int n)
{
    stack<int>s;
    int m = arr[0];
    for(int i=0;i<n;i++){
        m = min(m, arr[i]);
        s.push(m);
    }
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        stack<int>mys = _push(arr, n);
        _getMinAtPop(mys);
    }
    return 0;
}