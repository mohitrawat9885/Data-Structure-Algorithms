#include<iostream>
#include<unordered_set>
using namespace std;

bool isSubArrayWithZeroSum(int arr[], int n){
    unordered_set<int> us;
    int sum = 0;
    int count = 0;
    us.insert(sum);
    for (int i = 0; i < n;i++){
        sum += arr[i];
        if(us.find(sum) != us.end()){
            count++;
        }
        us.insert(sum);
    }
    cout << count << endl;
    return false;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
        cout << (isSubArrayWithZeroSum(arr, n)) ? "Yes" : "No";
}