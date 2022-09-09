#include<iostream>
using namespace std;

int main(){
    int a = 0, n = 16.5, evens=0, odds=0;

    for (int i = a; i <= n;i++){
        if(i%2 == 0)
            evens += i;
        else
            odds += i;
    }
    
}