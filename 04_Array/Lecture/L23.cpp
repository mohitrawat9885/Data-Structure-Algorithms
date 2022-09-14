#include<iostream>
using namespace std;

int maxLengthEO(int a[], int n){
    int res=0, count = 0, isEven = 0;
    if(a[0]%2 == 0){
        isEven = 1;
    }
    for (int i = 0; i < n;i++){
        if((a[i]%2 == 0) == isEven){
            count++;
            res = max(res, count);
        }
        else{
            count = 1;
            isEven = 0;
            if(a[i]%2 == 0){
                isEven = 1;
            }   
        }
        isEven = !isEven;
    }
    return res;
}
int maxLengthEO2(int a[], int n){
    int res=1, count = 1;
    for (int i = 1; i < n;i++){
        if((a[i]%2 == 0 && a[i-1]%2 != 0) || a[i]%2 != 0 && a[i-1]%2 == 0){
            count++;
            res = max(count, res);
        }
        else
            count = 1;
    }
    return res;
}
int main(){
    int n = 8;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >>a[i];
    }
        //int a[] = {7, 10, 13, 13, 14, 15, 19, 17};
    cout << maxLengthEO2(a, n);
}