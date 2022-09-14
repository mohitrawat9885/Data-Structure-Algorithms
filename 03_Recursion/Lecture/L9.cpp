#include<iostream>
using namespace std;

int sumOfNatural(int n){
    if(n == 0)
        return 0;
    return n + sumOfNatural(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << (n * (n + 1) / 2)<<endl;
    cout<<sumOfNatural(n);
}