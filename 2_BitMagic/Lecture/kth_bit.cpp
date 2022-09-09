#include<iostream>
using namespace std;


int  main(){
    int n, k;
    cin >> n >> k;
    if(n&(1<<(k-1))){
        cout << "Yes"<<endl;
    }
    else
        cout << "No"<<endl;
    if((n>>(k-1)&1)){
        cout << "Yes"<<endl;
    }
    else
        cout << "No"<<endl;
}