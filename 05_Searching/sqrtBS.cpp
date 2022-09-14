#include<iostream>
using namespace std;

int sqrt(int n){
    int l = 1, h = n, ans = -1;
    while(l<=h){
        int m = (l + h) / 2;
        int sqr = m * m;
        cout << m << " * " << m << " = " << sqr << endl;
        if(sqr == n ){
            return m;
        }
        if(sqr > n){
            h = m - 1;
        }
        else if(sqr < n){
            l = m + 1;
            ans = m;
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << sqrt(n);
}