#include<iostream>
using namespace std;

int posOfRightMostDiffBit(int m, int n){
        int count = 0;
        if(m == n)
            return -1;
        while(true){
            count++;
            if((m&1) == (n&1)){
                m >>= 1;
                n >>= 1;
            }
            else
                break;
        }
        return count;
}
int main(){
    int m, n;
    cin >> m >> n;
    cout << posOfRightMostDiffBit(m, n);
}