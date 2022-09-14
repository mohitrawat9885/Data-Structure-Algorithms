#include<iostream>
using namespace std;

unsigned int swapBits(unsigned int n){
    return ((n << 1) & 715827882) | ((n >> 1) & 1431655765);
}
int main(){
    int n;;
    cin >> n;
    cout << swapBits(n);
}