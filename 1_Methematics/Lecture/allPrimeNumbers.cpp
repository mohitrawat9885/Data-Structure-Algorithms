#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){
    if(num == 1)
        return false;
    if(num ==2 || num == 3)
        return true;
    if(num%2 ==0 || num%3 == 0)
        return false;
    for (int i = 5; i * i <= num;i+=6){
        if(num%i == 0 || num%(i+2) == 0)
            return false;
    }
    return true;
}

void allPrimeNumbers(int num){
    for (int i = 2; i*i <= num;i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
}

void allPrimeNumbers2(int num){
    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i * i <= num;i++){
        if(isPrime[i]){
            for (int j = 2 * i; j <= num;j+=i){
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= num;i++){
        if(isPrime[i])
            cout << i << " ";
    }
}

void allPrimeNumbers3(int num){
    vector<bool> isPrime(num + 1, true);
    for (int i = 2; i <= num;i++){
        if(isPrime[i]){
            cout << i <<" "<<i*i<<endl;
            for (int j = i * i; j <= num;j+=i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    int num;
    cin >> num;
    allPrimeNumbers(num);
}