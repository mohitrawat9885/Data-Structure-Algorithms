#include<iostream>
using namespace std;

void myLoop(int n, int ind = 0){
    if(ind == 3)
        return;
    for (int i = 1; i <= 5;i++){
        
        cout << i << " ";
        myLoop(i, ind+1);
    }
    cout << endl;
}
int main(){
    myLoop(5);
    // for (int i = 0; i < 3;i++){
    //     for (int j = 0; j< 3;j++){
    //         cout << i << " " << j << endl;
    //     }
    // }
}