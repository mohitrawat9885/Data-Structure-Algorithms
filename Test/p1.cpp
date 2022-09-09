#include<iostream>
#include<vector>
using namespace std;


void fillBan(int i, int j, int n, bool b,  vector<vector<int>>& ban){
        
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                if(l == i || m == j || (i-j == l-m) || i+j == l+m){
                    ban[l][m] = b;
                }
            }
        }
    }

int main(){
    int n=4;
    vector<vector<int>>v(n, vector<int>(n,0));
    int i, j;
    cin>>i>>j;

    v[i][j] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    fillBan(i, j, n, true, v);



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
}