#include<iostream>
using namespace std;

int no1sInArray(bool arr[], int n){
    int l = 0, h = n - 1;
    while(l<=h){
        int m = (l + h) / 2;
        if(arr[m] == 0){
            l = m + 1;
        }
        else{
            if(m == 0 || arr[m-1] != 1){
                return n - m;
            }
            h = m - 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << no1sInArray(arr, n);
}