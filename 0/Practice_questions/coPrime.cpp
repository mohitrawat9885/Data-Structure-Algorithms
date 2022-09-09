#include<iostream>
using namespace std;

int getSum(int N, int M){
    int a=N, b=M;
    while (a!=b)
    {
        if(a>b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return (N / a) + (M / b);
}
int main(){
    int N, M;
    cin>>N>>M;
    cout<<getSum(N, M);
}