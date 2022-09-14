#include<iostream>
using namespace std;

bool isPair(int arr[], int n, int x){
    int p1 = 0, p2 = n - 1;
    while(p1<p2){
        if((arr[p1]+arr[p2]) == x){
            cout << arr[p1] << " + " << arr[p2] <<" = ";
            return true;
        }
        else if((arr[p1]+arr[p2]) > x){
            p2--;
        }
        else{
            p1++;
        }
    }
    return false;
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
    cout << ((isPair(arr, n, x)) ? "Yes" : "No");
}