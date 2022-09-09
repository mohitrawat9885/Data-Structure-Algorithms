#include<iostream>
using namespace std;

void allDivisible(int num){
    int i;
    for (int i = 1; i <= n;i++){
        
    }
        for (i = 1; i * i < num; i++)
        {
            if (num % i == 0)
                cout << i << " ";
        }
    for (; i >= 1; i--)
    {
        if(num % i == 0) cout<<num/i<<" ";
    }
    
}

int main(){
    int num;
    cin >> num;
    allDivisible(num);
}