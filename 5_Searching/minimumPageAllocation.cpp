#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int maxPage(int arr[], int n, int k){
    int sl=0, sr=0, next, allo, maxP = INT_MIN;
    for (int i = 0; i < n;i++){
        sr += arr[i];
    }
    if(k==1){
        return sr;
    }
    k--;
    for (int i = 0; i < n - 1;i++){
        sr -= arr[i];
        sl += arr[i];
        if(abs(sl-(sr/k)) < abs(((sr-arr[i+1])/k) - (sl+arr[i+1]))){
            
            allo = sl;
            cout <<sl<< endl;
            k--;
            maxP = max(maxP, sl);
            sl = 0;
        }
        if(k == 0){
            cout << sr << endl<<endl;
            maxP = max(maxP, sr);
            break;
        }
    }
    return maxP;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >>arr[i];
    }
    int k;
    cin >> k;
    cout << maxPage(arr, n, k);
}