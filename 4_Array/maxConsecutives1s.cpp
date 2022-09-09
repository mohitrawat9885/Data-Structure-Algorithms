#include<iostream>
using namespace std;

int maxConsecutive1s(int a[], int n){
    int count = 0, res = 0;
    for (int i = 0; i < n;i++){
        if(a[i] == 1){
            count++;
        }
        else{
            res = max(res, count);
            count = 0;
        }
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << maxConsecutive1s(a, n);
}