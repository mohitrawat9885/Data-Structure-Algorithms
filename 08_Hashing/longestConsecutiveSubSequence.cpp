#include<iostream>
#include<unordered_set>
using namespace std;

int longestConsecutiveSubSequence(int arr[], int n){
    int size = 100001;
        int _min = arr[0], _max=arr[0];
        bool a[size];
        for(int i=0;i<n;i++){
            _min = min(_min, arr[i]);
            _max = max(_max, arr[i]);
            a[arr[i]] = true;
        }
        int count = 0, res = 0;
        for(int i=_min;i<=_max;i++){
            if(a[i]){
                count++;
            }
            else{
                res = max(res, count);
                count = 0;
            }
        }
        res = max(res, count);
        count = 0;
        return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestConsecutiveSubSequence(arr, n);
}