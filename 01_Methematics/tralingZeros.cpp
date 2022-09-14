#include<iostream>
using namespace std;

int tralingZeros(int n){
    unsigned long long int fact = 1, count = 0;
    for (int i = 2; i <= n;i++){
        fact *= i;
    }
    cout << "fact = " << fact << endl;
    while(fact%10 == 0){
        count++;
        fact /= 10;
    }
    return count;
}
int tralingZeros2(int n){
    int count = 0;
    for (int i = 5; i <= n;i *= 5){
        count += n / i;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << tralingZeros(n)<<endl;
    cout << tralingZeros2(n);
}