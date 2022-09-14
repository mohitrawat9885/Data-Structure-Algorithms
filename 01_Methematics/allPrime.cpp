#include<iostream>
#include<vector>
using namespace std;

void allPrime(int n){
    vector<bool> primes(n + 1, true);
    for (int i = 2; i <= n;i++){
        if(primes[i]){
            cout << i << " ";
            for (int j = i*i; j <= n;j+=i){
                // cout << j << endl;
                primes[j] = false;
            }
        }
    }

}
int main(){
    int n;
    cin >> n;
    allPrime(n);
}