#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res = max(a, b);
    while(true){
        if(res%a == 0 && res%b == 0){
            return res;
        }
        res++;
    }
}

int lcm2(int a, int b){
    int res, a2 = a, b2 = b;
    while(a2!=b2){
        if(a2>b2){
            a2 -= b2;
        }
        else {
            b2 -= a2;
        }
    }
    return (a * b) / a2;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b)<<endl;
    cout << lcm2(a, b);
}