#include<iostream>
using namespace std;

bool isPalindrome(int num){
    int rem, pNum = num, rev  = 0;
    while(num != 0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    cout << rev << endl;
    if(rev == pNum) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    cout<<isPalindrome(n);
}