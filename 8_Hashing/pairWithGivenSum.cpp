#include<iostream>
#include<unordered_set>
using namespace std;

bool isPairWhithGivenSum(int arr[], int n,int s){
    unordered_set<int> us;
    for (int i = 0; i < n;i++){
        if(us.find(s - arr[i]) != us.end()){
            return true;
        }
        us.insert(arr[i]);
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    cout<<(isPairWhithGivenSum(arr, n, s)) ? "Yes":"No";
}