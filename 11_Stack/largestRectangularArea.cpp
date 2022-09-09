#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int largestRectangularArea(int arr[], int n){
    int res = 0;
    for (int i = 0; i < n;i++){
        int a = arr[i];
        for (int j = i - 1; j >= 0;j--){
            if(arr[j] >= arr[i]){
                a += arr[i];
            }
            else{
                break;
            }
        }
        for (int k = i + 1; k < n;k++){
            if(arr[k] >= arr[i]){
                a += arr[i];
            }
            else{
                break;
            }
        }
        res = max(a, res);
    }
    return res;
}

void leftMin(int arr[], int n, vector<int> &lm){
    stack<int> s;
    s.push(-1);
    lm.push_back(-1);
    for (int i = 1; i < n;i++){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            s.pop();
        }
        int d = (s.empty()) ? -1 : s.top();
        lm.push_back(d);
        s.push(i);
    }
}
void rightMin(int arr[], int n, vector<int>&rm){
    stack<int> s;
    rm.push_back(n);
    s.push(n - 1);
    for (int i = n - 2; i >= 0;i--){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            s.pop();
        }
        int d = (s.empty()) ? n : s.top();
        rm.push_back(d);
        s.push(i);
    }
    reverse(rm.begin(), rm.end());
}

int largestRectangularArea2(int arr[], int n){
    vector<int> lm;
    vector<int> rm;
    leftMin(arr, n, lm);
    rightMin(arr, n, rm);

    int res = 0;
    for (int i = 0; i < n;i++){
        int check = ((rm[i] - lm[i]) - 1)*arr[i];
        res = max(res, check);
    }
    return res;
}

int largestRectangularArea3(int arr[], int n){
    stack<int>s;
    int res = 0, tp, curr;

    for (int i = 0; i < n;i++){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i  : i - s.top() - 1);
            res = max(res, curr);
            cout << curr << endl;
        }
        s.push(i);
    }
    while(!s.empty()){
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
        cout << curr << endl;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << largestRectangularArea3(arr, n);
}