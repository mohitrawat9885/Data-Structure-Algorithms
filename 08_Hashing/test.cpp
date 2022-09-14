#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    unordered_set<int> us;
    int pref_sum = 0;
    for (int i = 0; i < n;i++){
        // if(pref_sum == k){
        //     cout << "True";
        //     return 0;
        // }
        pref_sum += arr[i];
        if(us.find(pref_sum-k) != us.end()){
            cout << "true";
            return 0;
        }
        us.insert(pref_sum);
    }
    cout << "False";
}