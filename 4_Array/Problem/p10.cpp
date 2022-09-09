#include<iostream>
#include<vector>
using namespace std;

int maxOccured(int L[], int R[], int n, int maxx){
    vector<int> v(maxx, 0);
    for (int i = 0; i < n;i++){
        v[L[i]]++;
        v[R[i]+1]--;
    }
    int maxm = v[0], res = 0;
    for(int i=1;i<maxx;i++){
        v[i] += v[i - 1];
        if(maxm < v[i]){
            maxm = v[i];
            res = i;
        }
    }
    return res;
}
int main(){
    int n = 5;
    int L[n] = {1, 5, 9, 13, 21};
    int R[n] = {15,8,12,20,30};
    cout << maxOccured(L, R, n, 30);
}