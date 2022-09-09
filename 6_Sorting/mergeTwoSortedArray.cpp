#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < m;i++){
        cin >> b[i];
    }
    int j = 0, k = 0;
    while(j!=n || k!=m){
        if(a[j] < b[k] && j <n){
            cout << a[j]<<" ";
            j++;
        }
        else if(k<m){
            cout << b[k] << " ";
            k++;
        }
    }
}

