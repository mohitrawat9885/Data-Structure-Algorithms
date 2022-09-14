#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 100;i++){
        if(i%6 ==0){
for (int j = -6; j <= 35;j++){
    if(j%6 == 0){
        if(i-j == 9 || i-j == 10  || i-j == 11 || i-j == 12){
            cout << i - j << endl;
        }
    }
    }
        }
            
    }
    cout << endl;
    
}