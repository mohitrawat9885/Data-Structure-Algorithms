#include<iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num;i++)
        fact *= i;
    return fact;
}

int factorial2(int num){
    if(num == 0)
        return 1;
    return num * factorial2(num - 1);
}
int main(){
    int num;
    cin >> num;
    cout << factorial2(num);
}