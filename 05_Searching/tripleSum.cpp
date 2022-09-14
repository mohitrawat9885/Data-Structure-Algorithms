#include<iostream>
using namespace std;

bool isPair(int arr[],int p1, int p2, int x){
    while(p1<p2){
        if(arr[p1]+arr[p2] == x){
            cout << arr[p1] << " + " << arr[p2] << " + ";
            return true;
        }
        if((arr[p1]+arr[p2]) > x){
            p2--;
        }
        else{
            p1++;
        }
    }
    return false;
}

bool isTriple(int arr[], int n, int x){
    for (int i = 0; i < n-1;i++){
        bool tr = isPair(arr, i + 1, n, x - arr[i]);
        if(tr){
            cout << arr[i] << " = " << x;
        }
        return tr;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << ((isTriple(arr, n, x)) ? " Yes" : "No");
}