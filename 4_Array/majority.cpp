#include<iostream>
using namespace std;

int majority(int a[], int n){
    int count = 0, ind = 0, maj = 0;
    for (int i = 1; i < n;i++){
        if(a[i] == a[i-1]){
            count++;
            if(count > maj){
                maj = count;
                ind = i;
            }
        }
        else {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < n;i++){
        if(a[i] == a[ind]){
            count++;
        }
    }
    if(count > n/2){
        return a[ind];
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << majority(a, n);
}