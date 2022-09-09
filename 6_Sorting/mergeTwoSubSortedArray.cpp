#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int low, mid, hi;
    cin >> low >> mid >> hi;
    int arr[size];
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    int n = mid + 1, m;
    m = hi - mid;
    int left[n], right[m];
    for (int i = 0; i < n;i++){
        left[i] = arr[i];
    }
    for (int i = 0; i < m;i++){
        right[i] = arr[i + n];
    }
    
    int i = 0, j = 0, k=0;
    while(i!=n || j!=m){
        if( (left[i] < right[j]) && i<n){
            arr[k] = left[i];
            i++;
            k++;
        }
        else if(j<m){
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}


// 5
// 0 2 4
// 10 15 20 11 30