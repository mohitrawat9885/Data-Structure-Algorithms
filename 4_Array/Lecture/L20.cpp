#include<iostream>
using namespace std;

int maxWater(int arr[], int n){
    int m1 = 0, m2=-1;
    for (int i = 1; i < n;i++){
        
        if(arr[i] >= arr[m1]){
            m2 = m1;
            m1 = i;
        }
        if(arr[i] <= arr[m1] && i != m1 && (m2 == -1 || arr[i] > arr[m2])){
            m2 = i;
        }
        // if(arr[i] <= arr[m1] && m2 == -1){
        //     m2 = i;
        // }
    }
    

    if(m1>m2){
        swap(m1, m2);
        swap(arr[m1], arr[m2]);
    }
    cout << "m1 = " << m1 << " m2 = " << m2 << endl;


    int vol = (m2 - 1 - m1) * min(arr[m1], arr[m2]);
    // cout << "Volome = " << vol << endl;
    int fill = 0;
    for (int i = m1+1; i < m2;i++){
        fill += arr[i];
        
    }
    // cout << "fill = " << fill << endl;
    // cout << endl;
    return (vol - fill);

    // return (vol - fill);
}

int maxWater2(int a[], int n){
    int w, l = 0, v, wt=0, fill=0, w_trap=0;
    for (int i = 1; i < n;i++){
        w = i - 1 - l;
        v = min(a[l], a[i]) * w;
        wt = v - fill;
        if(a[i] >= a[l] || i == (n-1)){
            l = i;
            fill = 0;
            w_trap += wt;
            continue;
        }
            fill += a[i];
    }
    // if(w_trap < 0){
    //     return 0;
    // }
    return w_trap;
}
int maxWater3(int arr[], int n){
    int res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n;i++){
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0;i--){
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < n - 1;i++){
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // int arr[] = {2, 0, 2};
    // int arr2[] = {3, 0, 1, 2, 5};
    int a[] = {3, 2, 1};
    cout<<" total water traped = "<<maxWater3(arr, n);
}