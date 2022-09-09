#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double r;
    for (int i = 1; i <= n;i++){
        r = n / i;
        cout << r<<endl;
    }
}