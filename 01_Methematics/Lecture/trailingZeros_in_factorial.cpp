#include<iostream>
using namespace std;

int trailingZeros(int num){
    unsigned long long int fact = 1;
    for (int i = 1; i <= num;i++){
        fact *= i;
    }
    int count = 0;
    // cout << endl<<"Factorial is: = " 
    //      << fact << endl;
    while (fact%10 == 0)
    {
        fact /= 10;
        count++;
    }
    return count;
}
int trailingZeros2(int num){
    int res = 0;
    for (int i = 5; i <= num;i*=5){
        res += num / i;
    } 
    return res;
}
int main(){
    long long int num;
    cin >> num; 
    cout << trailingZeros(num);
}