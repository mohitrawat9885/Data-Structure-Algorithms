#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    // y = x * 3.5;
    cout << bitset<8>(x) << endl;
    x = x & (x - 1);
    cout << bitset<8>(x);
}