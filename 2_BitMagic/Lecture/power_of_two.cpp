#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n == 0)
        return false;
    while (n!=1)
    {
        if(n%2 != 0)
            return false;
        n /= 2;
    }
    return true;
}
bool isPowerOfTwo2(int n){
    if(n==0)
        return 0;
    return ((n &  (n - 1)) == 0);
}

int main(){
    int n;
    cin >> n;
    cout << (isPowerOfTwo2(n) ? "Yes" : "No");
}