#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n ==1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    for (int i = 5; i * i <= n;i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
}

void primeFactors(int n){
    if(isPrime(n)){
        cout << n;
        return;
    }
    for (int i = 2; i < n;i++){
        if(isPrime(i)){
            while(n%i == 0){
                cout << i << " ";
                n /= i;
            }
        }
    }
}

void primeFactors2(int n){
    if (n <= 1)
        return;
    for (int i = 2; i*i <= n;i++){
        while(n%i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n > 1)
        cout << n;
}

int main(){
    int n;
    cin >> n;
    primeFactors2(n);
}