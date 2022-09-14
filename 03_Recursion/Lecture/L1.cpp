#include<iostream>
using namespace std;
void func1(){
    cout << "C++" << endl;
    func1();
}

int main(){
    func1();
}