#include<iostream>
#include<ctime>
using namespace std;

int countDigits(int num){
    long long int digits = 0;
    while(num != 0){
        num /= 10;
        digits++;
    }
    return digits;
}

int countDigits2(int num){
    int digits = 0;
}

int main(){
    long long int n;
    cin >> n;
    cout << countDigits(n)<<endl;
}