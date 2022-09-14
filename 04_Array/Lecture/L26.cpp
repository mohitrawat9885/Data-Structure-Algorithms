#include<iostream>
using namespace std;

void minFlips(int a[], int n){
    int ones = 0, zeros = 0, i;
    if(a[0] == 1){
        ones = 1;
    }
    else{
        zeros = 1;
    }
    for (int i = 1; i < n;i++){
        if(a[i]!=a[i-1]){
            if(a[i] == 1){
                ones++;
            }
            else
                zeros++;
        }
    }
    int flip = (ones < zeros) ? 1 : 0;
    bool start = 1;
    for (i = 0; i < n;i++){
        if(a[i] == flip && start){
            start = false;
            cout << "From " << i;
        }
        if(a[i] != flip && !start){
            start = true;
            cout << " to " << i - 1<<endl;
        }
    }
    if(a[i-1] !=flip && !start){
        cout << " to " << i-1;
    }
}

void minFlips2(int a[], int n){
    int i;
    bool start = true;
    for (i = 1; i < n;i++){
        if(a[i] != a[0] && start){
            start = false;
            cout << "From " << i;
        }
        if(a[i] == a[0] && !start){
            start = true;
            cout << " to " << i-1 << endl;
        }
    }
     if(a[i-1] != a[0] && !start){
            cout << " to " << i-1 << endl;
        }
}

void minFlip3(int a[], int n){
    for (int i = 1; i < n;i++){
        if(a[i]!=a[i-1]){
            if(a[i]!=a[0]){
                cout << "From " << i << " to ";
            }
            else {
                cout << (i - 1) << endl;
            }
        }
    }
    if(a[n-1] != a[0]){
        cout << (n - 1) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    minFlips2(a, n);
}