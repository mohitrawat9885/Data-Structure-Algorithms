#include<bits/stdc++.h>
using namespace std;
int exactly3Divisor(int N)
    {
        int count = 0, divi = 0, j, i;
    for (i = 1; i <= N;i++){
        divi = 0;
        for (j = 1; j <= i;j++){
            if(i%j == 0){
                divi++;
            }
        }
            if (divi == 3)
            {
                cout << i << endl;
                count++;
            }
    }
    return count;
    }

int exactly3Divisor2(int N){
    vector<bool> isPrime(sqrt(N), true);
    int count = 0;
    for (int i = 2; i <= isPrime.size();i++){
        if(isPrime[i]){
            cout << i <<endl;
            count++;
            for (int j = i * i; j <= isPrime.size();j+=i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    cout<<"Divisiors are = "<<exactly3Divisor2(n);
}