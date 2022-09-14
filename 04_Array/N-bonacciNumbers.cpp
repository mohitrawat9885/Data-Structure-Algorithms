#include<iostream>
using namespace std;

void nBonacciNumbers(int N, int M){
    int a[M], i;
    for (i = 0; i < N-1;i++){
        a[i] = 0;
    }
    a[N - 1] = 1;
    a[N] = 1;
    int sum = 1;
    for (i = N+1; i < M; i++)
    {
        sum += a[i - 1] - a[i - N-1];
        a[i] = sum;
        }
    for (i = 0; i < M;i++){
        cout << a[i] << " ";
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    nBonacciNumbers(N, M);
}