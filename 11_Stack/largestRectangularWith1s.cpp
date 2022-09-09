#include<iostream>
#include<stack>
using namespace std;

#define R 4
#define C 4

int maxArea(int arr[], int n){
    stack<int>s;
    int tp, curr, res = 0;
    for(int i = 0; i < n;i++){
        while(!s.empty() && arr[s.top()] >= arr[i]){
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while(!s.empty()){
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }
    return res;
}

int largestRectangularWith1s(int arr[][C]){
    int res = maxArea(arr[0], C);
    for (int i = 1; i < R;i++){
        for (int j = 0; j < C;j++){
            if(arr[i][j]){
                arr[i][j] += arr[i - 1][j];
            }
        }
        res = max(res, maxArea(arr[i], C));
    }
    return res;
}
int main(){
    int mat[][C] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
    };

    cout << largestRectangularWith1s(mat);
}