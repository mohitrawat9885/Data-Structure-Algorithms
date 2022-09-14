#include<iostream>
using namespace std;

int main(){
    int n = 11;
    int a[] = {1, 5, 8, 11, 16, 19, 21, 22, 24, 30, 39};
    int s = 0, e = n - 1, m = a[n-1]+1;
    for (int i = 0; i < n;i++){
        if(i%2 == 0){
            if(a[e] > m){
                if(e%2 == 0){
                    a[i] += m * (a[e]%m);
                }
                else{
                    a[i] += m * (a[e]/m);
                }
                
            }
            else{
                a[i] += m * a[e];
            }
            e--;
        }
        else 
        {
            if(s%2 == 0){
                a[i] = (m * a[i]) + a[s] % m;
            }
            else {
                a[i] = (m * a[i]) + a[s] / m;
            }
            s++;
        }
    }
    
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    for (int i = 0; i < n;i++){
        if(i%2 == 0){
            a[i] /= m;
        }
        else {
            a[i] %= m;
        }
            
    }
    cout << endl;
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
}