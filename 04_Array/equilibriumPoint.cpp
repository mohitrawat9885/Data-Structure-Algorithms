#include<iostream>
using namespace std;

bool isEquilibriumPoint(int a[], int n){
    int allSum = 0;
    for (int i = 1; i < n;i++){
        allSum += a[i];
    }
    int sum = 0;
    for (int i = 1; i < n;i++){
        
         if(sum == allSum){
             cout << sum;
             return true;
        }
        allSum -= a[i];
        sum += a[i-1];
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << (isEquilibriumPoint(a, n) ? "Yes":"No");
}