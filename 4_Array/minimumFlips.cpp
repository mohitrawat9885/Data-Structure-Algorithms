#include<iostream>
using namespace std;

void minimumFlips(int a[], int n){
    int first = a[0], i;
    bool ac = 0;
    for (i = 0; i < n;i++){
        if(a[i] != first && !ac){
            cout << "from " << i << " to ";
            ac = 1;
        }
        else if(a[i]==first && ac ){
            cout << i-1<<endl;
            ac = 0;
        }
    }
    if(ac){
        cout << i - 1;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    minimumFlips(a, n);
}