#include<iostream>
using namespace std;

unsigned int getFirstSetBit(int n){
    int count = 0;
    while(n!=0){
        count++;
        if(n&1){
            break;
        }
        n >>= 1;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout << getFirstSetBit(n);
}