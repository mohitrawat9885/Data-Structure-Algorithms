#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int js[n], is[n], rj = 0, ri = 0;
    is[0] = arr[0];
    js[0] = arr[n-1];
    for (int i = 1; i < n;i++){
        is[i] = min(arr[i], is[i - 1]);
    }
    int ind = 1;
    for (int i = n - 2; i >= 0;i--){
        js[ind] = max(arr[i], js[ind - 1]);
        ind++;
    }
        for (int i = 0; i < n; i++)
        {
            cout <<js[i]<<"  "<< is[i] <<endl;
        }

        int x = 0, y = 0;
        for (int i = 0; i < n;i++){
            if(js[x]< is[y]){
                y++;
                continue;
            }
            if(js[x] >= is[y]){
                rj = js[i];
                ri = is[i];
                break;
            }
        }

        cout << "i = " << ri << " j = " << rj<<endl;
        for (int i = 0; i < n;i++){
            if(arr[i] == ri){
                cout<< arr[i] << endl;
                ri = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0;i--){
            if(arr[i] == rj){
                rj = i;
                break;
            }
        }
            cout << "i = " << ri << " j = " << rj << endl;
        cout << rj - ri;
}