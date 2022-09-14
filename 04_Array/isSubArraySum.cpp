#include<iostream>
using namespace std;

bool isSubArraySum(int a[], int n, int sum){
    int maxSum = a[0], start = 0, end = n, next=1;
    while(next < n){
        if(maxSum == sum){
            return true;
        }
        if(maxSum < sum){
            maxSum += a[next];
            next++;
        }
        else if(maxSum > sum){
            maxSum -= a[start];
            start++;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    cout<<(isSubArraySum(a, n, sum) ? "Yes": "No");
}