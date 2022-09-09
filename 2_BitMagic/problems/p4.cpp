#include<iostream>
#include<cmath>
using namespace std;

int countSetBits(int n){
    int count = 0, t;
    for (int i = 1; i <= n;i++){
        t = i;
        while (t != 0)
        {
            if (t & 1)
            {
                count++;
            }
            t >>= 1;
        }
    }
    return count;
}

int countSetBits2(int n){
    int table[256];
    table[0] = 0;
    for (int i = 0; i < 256; i++)
        {
            table[i] = (i & 1) + table[i / 2];
        }
    int count = 0, t, lp=0;
    
    t = ceil((float)n / 255.0);
    cout << "t = " << t << endl;
    for (int i = 0; i < t;i++){
        if(lp==n)
            break;
        for (int i = 0; i < 256; i++)
        {
            if(lp==n)
                break;
                count += table[i];
                lp++;
        }

    }
    return count;
}

int countSetBits3(int n){
    int count = 0, t = n,k;
    for (int i = 2; t!=0 ;i*=2){
        k = (i / 2) - 1;
        if(n%i < k)
            k = n%i;
        count += (n / i) * (i/2) + (n % i) - k;
        // cout <<"i = "<<i<<" k = " <<k<<" count = "<<count<< endl;
        t >>= 1;
    }
    // count += (n / 2) * 1 + (n % 2) - 0;
    // count += (n / 4) * 2 + (n % 4) - 1;
    // count += (n / 8) * 4 + (n % 8) - 3;
    // count += (n / 16) * 8 + (n % 16) - 7;
    // count += (n / 32) * 16 + (n % 32) - 15;
    // count += (n / 64) * 32 + (n % 64) - 31;
    // cout << "Count 2 = " << count2 << endl;
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countSetBits(n)<<endl;
    cout << countSetBits3(n)<<endl;

}