#include<iostream>
using namespace std;

int maxConsecutive1s(int a[], int n){
    int max1s = 0, count = 0;
    for (int i = 0; i < n;i++){
        if(a[i] == 0){
            count = 0;
        }
        else{
            count++;
            max1s = max(max1s, count);
        }
    }
    return max1s;
}
int main(){
    int n=6;
    int a[] = {0, 1, 1, 0, 1, 0};
    cout<<maxConsecutive1s(a, n);
}