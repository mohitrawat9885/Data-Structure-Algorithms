#include<iostream>
using namespace std;

void freqOfSortArray(int a[], int n){
    int count = 1, i;
    for (i = 1; i < n;i++){
        if(a[i] != a[i-1]){
            cout << a[i - 1] << " "<< count << endl;
            count = 1;
        }
        else{
            count++;
        }
    }
    cout << a[i - 1] << " " << count;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    freqOfSortArray(a, n);
}