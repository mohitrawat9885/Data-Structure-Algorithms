#include<iostream>
using namespace std;

int power(int n, int p){
    int t = n;
    for (int i = 1; i < p;i++){
        n *= t;
    }
    return n;
}
int power2(int n, int p){
    if(n%2 == 0)
        return power2(n, p / 2) * power2(n, p / 2);
    else return (n, n-1);
}

int main(){
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
}