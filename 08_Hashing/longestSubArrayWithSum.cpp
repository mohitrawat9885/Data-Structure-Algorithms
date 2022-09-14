#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int longestSubArrayWithSum(int arr[], int n, int s){
    unordered_map<int, int>um;
    int count = 0, c_sum = 0;
    for (int i = 0; i < n;i++){
        c_sum += arr[i];
        if(c_sum == s){
            count++;
        }
        // if(um.find(c_sum) == um.end()){
        //     um[c_sum]++;
        // }
        if(um.find(c_sum - s) != um.end()){
            count += um[c_sum - s];
        }
        um[c_sum]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    cout << longestSubArrayWithSum(arr, n, s);
}