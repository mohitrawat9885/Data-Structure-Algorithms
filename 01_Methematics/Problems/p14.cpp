#include<iostream>
using namespace std;

int main(){
    int n, a;
    cin >>a>> n;
    for (int i = 1; i < n;i++){
        
        if((a*i)%n == 1)
            cout << i;
    }
}