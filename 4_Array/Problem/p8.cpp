#include<iostream>
using namespace std;

void reverseMe(int a[], int s, int e){
    while(s<e){
        swap(a[s], a[e]);
        s++;
        e--;
    }
}

void rotateArray(int a[], int n, int d){
    reverseMe(a, 0, d - 1);
    reverseMe(a, d, n - 1);
    reverseMe(a, 0, n - 1);
}

int main(){
    int n, d;
    cin>>n>>d;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    rotateArray(a, n, d);
    for (int i = 0; i < n;i++){
        cout<< a[i]<<" ";
    }

}