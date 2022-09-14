#include<iostream>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    int res = power(n, p / 2);
    res *= res;
    if(p%2 == 0){
        return res;
    }
    else {
        return res * n;
    }
}

int power2(int n, int p){
    int res = 1;
    while(p > 0){
        if(p%2 != 0){
            res = res * n;
        }
        n = n * n;
        p /= 2;
    }
    return res;
}

int main(){
    int n, p;
    cin >> n >> p;
    cout << power(n, p)<<endl;
    cout << power2(n, p);
}