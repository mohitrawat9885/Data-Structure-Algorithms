#include<iostream>
#include<unordered_set>
using namespace std;

int isSubArrayWithGivenSum(int arr[], int n, int s){
    unordered_set<int> us;
    int sum = 0;
    //us.insert(0);
    int count = 0;
    for (int i = 0; i < n;i++){
        
        if(sum == s){
            count++;
        }
        sum += arr[i];
        if(us.find(sum-s) != us.end()){
            count++;
        }
        us.insert(sum);
    }
    if(us.find(s) != us.end()){
            count++;
    }
    return count;
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
    cout << isSubArrayWithGivenSum(arr, n, s);
}