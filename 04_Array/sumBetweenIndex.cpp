#include<iostream>
using namespace std;

int getSum(int a[], int n, int from, int to){
    int sums[n];
    sums[0] = a[0];
    for(int i = 1; i < n;i++){
        sums[i] = sums[i - 1] + a[i];
    }

    if(from == 0){
        return sums[to];
    }
    else{
        return sums[to] - sums[from - 1];
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int from, to;
    cin >> from >> to;
    cout << getSum(a, n, from, to);
}