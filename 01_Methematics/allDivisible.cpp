#include<iostream>
using namespace std;

void allDivisible(int n){
    for (int i = 2; i <n;i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

void allDivisible2(int n){
    int i;
    for (i = 1; i * i < n;i++){
        if(n%i == 0){
            cout << i << " ";
            // if(n%i != i){
            //     cout << n / i<<" ";
            // }
        }
    }
    i--;
    for (;i >=1;i--){
        if(n%i == 0){
            // if(n%i != i){
                cout << (n / i)<<" ";
           // }
        }
    }

}

int main(){
    int n;
    cin >> n;
    allDivisible(n);
    cout << endl;
    allDivisible2(n);
}