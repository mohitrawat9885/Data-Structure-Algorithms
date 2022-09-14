#include<iostream>
using namespace std;

int countSetBits(int n){
    int count=0;
    for (int k = 1; k <= n;k++){
        if(n&(1<<(k-1))) count++;
    }
    return count;
}

int countSetBits2(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n >>= 1;
    }
    return count;
}
int countSetBits3(int n){
    int count = 0;
    while(n!=0){
        n = (n & (n - 1));
        count++;
    }
    return count;
}

int countSetBits4(int n){
    int table[256];
    table[0] = 0;
    // cout << table[0] << endl;
    for (int i = 1; i < 256;i++){
        table[i] = (i & 1) + table[i / 2];
        // cout << table[i] << endl;
    }
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}

int countSetBits5(int n){
    int table[256];
    table[0] = 0;
    // cout << table[0] << endl;
    for (int i = 1; i < 256;i++){
        table[i] = (i & 1) + table[i / 2];
        // cout << table[i] << endl;
    }
    int res = table[n];
    cout <<"table["<<(n)<<"]"<<table[n]<<endl;
    n = n >> 8;
    res = res + table[n];
     cout <<"table["<<(n)<<"]"<<table[n]<<endl;
    n = n >> 8;
    res = res + table[n];
     cout <<"table["<<(n)<<"]"<<table[n]<<endl;
    n = n >> 8;
    res = res + table[n];
     cout <<"table["<<(n)<<"]"<<table[n]<<endl;

     return res;
}

int main(){
    int n;
    cin >> n;
    // cout << countSetBits(n)<<endl;
    // cout << countSetBits2(n)<<endl;
    // cout << countSetBits3(n)<<endl;
    cout << countSetBits5(n)<<endl;
}