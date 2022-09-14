#include<iostream>
using namespace std;

int sqrt(int n){
    int start = 0, end = n, mid, root, ans;
    while(start<= end){
        mid = (start + end) / 2;
        root = mid * mid;
        if(root == n){
            return mid;
        }
        else if(root > n){
            end = mid - 1;
        }
        else if(root < n){
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << sqrt(n);
}