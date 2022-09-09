#include<iostream>
using namespace std;

int getMaxAppear(int L[], int R[], int n, int m){
    int a[m];
    for (int i = 0; i < m;i++){
        a[i] = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        a[L[i]] = 1;
        a[R[i + 1]] = -1;
    }
    int maxV = 0, res=0;
        for (int i = 1; i < m; i++)
        {
        a[i] += a[i - 1];
           if(a[i] > maxV){
            maxV = a[i];
            res = i;
        }
    }
    return res;
}

int main(){
    int n = 4, m=18;
    int L[n] = {1, 2, 5, 15};
    int R[n] = {5, 8, 7, 18};
    cout<<getMaxAppear(L, R, n, m);
}