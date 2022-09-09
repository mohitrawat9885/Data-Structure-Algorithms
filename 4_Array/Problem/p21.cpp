#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sort_a = 0, sort_d=0;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

        for (int i = 1; i < n; i++)
        {
            if(arr[i-1] >= arr[i]){
                sort_d++;
            }
            else{
                sort_a++;
            }
        }
        cout << sort_a<<endl;
        cout << sort_d << endl;

        if(sort_a == 0 || sort_d == 0){
            cout << "false";
        }
        if(sort_a == 1){
            if(arr[0] > arr[n-1]){
                cout << "false";
            }
            else{
                cout << "true";
            }
        }
        if(sort_d == 1){
            if(arr[0] > arr[n-1]){
                cout << "true";
            }
            else{
                cout << "false";
            }
        }
        
}