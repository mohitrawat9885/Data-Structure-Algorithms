#include<iostream>
#include<climits>
using namespace std;

int maxIndexDiff(int a[], int n){
    int L[n], R[n], maxI = INT_MIN;
    L[0] = 0;
    R[n - 1] = n-1;
    int mV = 0;
    for (int i = 1; i < n;i++){
        if(a[L[i-1]] > a[i]){
            mV = i;
        }
        L[i] = mV;
    }
    mV = n - 1;
    for (int i = n - 2; i >= 0;i--){
        if(a[R[i+1]] < a[i]){
            mV = i;
        }
        R[i] = mV;
    }
    cout << "Table" << endl;
    for (int i = 0; i < n;i++){
        cout << L[i] << " " << R[i] << endl;
    }
    cout << "Table End" << endl;
    
    int j=0, k=0;
    while(k<n-1){
        if(a[R[j]] >= a[L[k]]){
            maxI = max(maxI, R[j] - L[k]);
            cout << maxI << endl;
            if(j != n-1){
                j++;
                continue;
            }
        }
        if(a[R[j]] < a[L[k]] || j == (n-1))
        {
            k++;
        }
    }
    // cout << endl
    //      << k << " " << j << endl;
    return maxI;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout << endl;

    cout <<"Output: "<<maxIndexDiff(a, n);
}