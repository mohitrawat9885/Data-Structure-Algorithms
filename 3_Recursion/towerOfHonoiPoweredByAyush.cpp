#include<iostream>
using namespace std;
void rec(int n, char s, char h, char d){
    if(n==0){
        return;
    }
    rec(n-1,s,d,h);
    cout<<"From"<<s<<"to"<<d<<endl;
    rec(n-1,h,s,d);
}

int main(){
    int n = 3;
    rec(n,'A','B','C');
}