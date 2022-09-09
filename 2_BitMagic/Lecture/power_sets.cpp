#include<iostream>
#include<math.h>
using namespace std;

void powerSets(string s){
    int l = s.length();
    int pSet = pow(2, l);
    for (int i = 0; i < pSet;i++){
        for (int j = 0; j < l;j++){
            if(i & (1<<j)){
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main(){
    string s;
    cin>>s;
    powerSets(s);
}