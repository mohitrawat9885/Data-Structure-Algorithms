#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void maxInSubArray(int arr[], int n, int k){
    deque<int> dq;
    for (int i = 0; i < k;i++){
        while(!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for (int i = k; i < n;i++){
        cout << arr[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << arr[dq.front()];


    // deque<int>dq;
    //     vector<int>v;
    //     for(int i=0;i<k;i++){
    //         while(!dq.empty() && arr[i] >= arr[dq.back()]){
    //             dq.pop_back();
    //         }
    //         dq.push_back(i);
    //     }
    //     for(int i=k;i<n;i++){
    //         v.push_back(arr[dq.front()]);
    //         while(!dq.empty() && dq.front() <= i-k){
    //             dq.pop_front();
    //         }
    //         while(!dq.empty() && arr[i] >= arr[dq.back()]){
    //             dq.pop_back();
    //         }
    //         dq.push_back(i);
    //     }
    //     v.push_back(dq.front());
    //     for(auto e:v){
    //         cout << e << " ";
    //     }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    maxInSubArray(arr, n, k);
}