#include<iostream>
#include<vector>
using namespace std;

struct kStack{
    // vector<vector<int>> stack;
    vector<vector<int>> stack;
    kStack(int size){
        vector<vector<int>> stack(size);
    }
    void push(int data, int sNo){
        stack[sNo].push_back(data);
    }
};

int main(){
    int size;
    cin >> size;
    kStack s(size);
    int data;
    cin >> data;
    int k;
    cin >> k;
    s.push(data, k);
    
}