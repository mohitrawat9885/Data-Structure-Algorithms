#include<iostream>
using namespace std;

int hcfOfTwoNumber(int a, int b){
    for (int i = (a < b) ? a : b; i >= 1;i--){
        if(a%i == 0 && b%i == 0)
            return i;
    }
    return 1;
}


int hcfOfTwoNumber2(int a, int b){
    while (a!=b)
    {
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int hcfOfTwoNumber3(int a, int b){
    if(b == 0){
        return a;
    }
    else
        return hcfOfTwoNumber3(b, a % b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << hcfOfTwoNumber2(a, b);
}