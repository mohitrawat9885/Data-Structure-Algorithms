#include<iostream>
using namespace std;

int maxConsecutiveOnes(int n){
    int count = 0, maxCount = 0;
    while(n){
        if(n&1)
            count++;
        else
            count = 0;
        if(count > maxCount)
            maxCount = count;
        n >>= 1;
    }
    return maxCount;
}

int main(){
    int n;
    cin >> n;
    cout << maxConsecutiveOnes(n);
}