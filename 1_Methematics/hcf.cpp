#include<iostream>
using namespace std;

int hcf(int a, int b){
    int n = min(a, b);
    while(true){
        if(a%n == 0 && b%n == 0){
            return n;
        }
        n--;
    }
}

int hcf2(int a, int b){
    while(a!=b){
        if(a>b){
            a -= b;
        }
        else {
            b -= a;
        }
        cout <<"a = "<< a << " b = " << b << endl;
    }
    return a;
}


int hcf3(int a, int b){
    if(b == 0){
        return a;
    }
    return hcf3(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << hcf(a, b)<<endl;
     cout << hcf3(a, b);
}