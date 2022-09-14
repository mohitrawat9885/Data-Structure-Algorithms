#include<iostream>
using namespace std;

bool isLucky(int n, int k=2){
    if(n%k==0){
        return false;
    }
    if(n<k)
        return true;
    isLucky((n - (n / k)), k+1);
}

int main(){
    int n;
    // cin >> n;
    for (int i = 1; i <= 100;i++){
        if(isLucky(i))
            cout << i << endl;
    }
        // cout << (isLucky(n)) ? "Yes" : "No";
}