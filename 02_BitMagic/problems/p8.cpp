#include<iostream>
#include <bitset>
using namespace std;
int greyConverter(int n){
    return n ^ (n>>1);
}

int grayToBinary(int n){
    int k = 0;
    int m = n;
    if(n==0)
        return 0;
    while (m)
    {
        k++;
        m >>= 1;
    }
    // cout << " k = " << k << endl;
    int r = 1 << k - 1, x, y;
    m = n;

    for (int i = 1; i < k;i++){
        m = m >> 1;
        x = n ^ m;
        y = 1 << (k - 1 -i);
        x = x & y;
        r = r | x;
    }
    return r;
}

int grayToBinary2(int n){
    int k = 4;
    int m = n;
    int r = 1 << k - 1, x, y;


        m = m >> 1;
        x = n ^ m;
        y = 1 << (k - 2);
        x = x & y;
        r = r | x;
        
        m = m >> 1;
        x = n ^ m;
        y = 1 << (k - 3);
        x = x & y;
        r = r | x;

        m = m >> 1;
        x = n ^ m;
        y = 1 << (k - 4);
        x = x & y;
        r = r | x;

    return r;
}
int grayToBinary3(int n){
    
    if(n==0)
        return 0;
    int m = n, k=0;
    while (m)
    {
        k++;
        m >>= 1;
    }
    int r = 1 << k-1;
    for (int i = 1; i < k;i++){
        m = (n ^ (r>>1)) & (1 << (k - 1 - i));
        r = r | m;
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    // cout<<greyConverter(n);
    // cout << "Gray = " << bitset<8>(n) << endl;
    cout<<grayToBinary3(n)<<endl;
    // cout << "Bina = " << bitset<8>(grayToBinary3(n));
}