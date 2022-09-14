#include<iostream>
using namespace std;

int LCM(int a, int b){
    for (int i = (a > b) ? a : b; i <= a * b;i++){
        if(i%a == 0 && i%b == 0)
            return i;
    }
    return a * b;
}

int GCD(int a, int b){
    while(a!=b){
        if(a > b )
            a -= b;
        else
            b -= a;
    }
    return a;
}

int LCM2(int a, int b){
    return (a * b) / GCD(a, b);
}



int main(){
    int a, b;
    cin >> a >> b;
    cout <<"First Func "<<LCM2(a, b)<<endl;
    cout << "Second Func " << LCM(a, b) << endl;
}