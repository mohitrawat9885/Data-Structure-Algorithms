#include<bits/stdc++.h>
using namespace std;

void arithmeticExpressions(vector<int>arr, int num,  int i){
    if(i >= arr.size()){
        if(num % 101 == 0){
            cout<<num/101<<endl;
            return;
        }
    }
    arithmeticExpressions(arr, num*arr[i], i+1);
    arithmeticExpressions(arr, num/arr[i], i+1);
    arithmeticExpressions(arr, num-arr[i], i+1);
    arithmeticExpressions(arr, num+arr[i], i+1);
}

int main(){
    vector<int>v = {22, 79, 21};
    arithmeticExpressions(v, v[0], 1);
}