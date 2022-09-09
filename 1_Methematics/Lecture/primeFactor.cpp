#include<iostream>
using namespace std;

int isPrime(int n){
    if(n == 1)
        return false;
    if(n == 2 || n == 3)
        return true;
    if(n%2 == 0 || n%3 == 0)
        return false;

    for (int i = 5; i * i <= n; i+=6){
        if(n%i==0 || n%(i+2) == 0)
            return false;
    }
    return true;
}
void primeFactors(int n){
    int i, t = n;
    if(n <= 1)
        return;
    for (i = 2; i*i <= t;i++)
    {
        if(isPrime(i)){
            if(n%i == 0){
                cout << i<< " ";
                n /= i;
            }
            else{
                i++;
            }
        }
        else {
            i++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    primeFactors(n);
}