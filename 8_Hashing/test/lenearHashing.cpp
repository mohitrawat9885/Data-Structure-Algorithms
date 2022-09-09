#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(10, 10);
    int arr[] = {4, 14, 24, 44};
    
    for(auto i: v){
        cout << i << " ";
    }
}