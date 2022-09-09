#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 14;i++){
        for (int j = 0; j <= 14;j++){
            for (int k = 0; k <= 14;k++){
                if(i+j+k == 14){
                    if(i*j*k == 64 || i*j*k == 105 || i*j*k == 128 || i*j*k == 150){
                        cout << i << " " << j << " " << k <<" * = "<<i*j*k<<endl;
                    }
                    
                }
            }
        }
    }
}