#include<iostream>
using namespace std;

bool isSparse(int n){
    int count = 0;
    while(n){
        if(n&1)
            count++;
        else
            count=0;
        if(count == 2)
            return 0;
        
        n >>= 1;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    cout << ((isSparse(n))? "Yes":"No");
}