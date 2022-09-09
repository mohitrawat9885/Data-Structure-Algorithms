#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void subArraySum(int arr[], int n){
     for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<" "<<endl;
        }
     }
}

void findSubset(vector<int>arr, int i, vector<int>out, vector<vector<int>> &ans){
    if(i >= arr.size()){
        ans.push_back(out);
        return;
    }
    findSubset(arr, i+1, out, ans);
    out.push_back(arr[i]);
    findSubset(arr, i+1, out, ans);
}

void subSet(vector<int>v){
    vector<vector<int>>ans;
    vector<int> output;

    findSubset(v, 0, output, ans);
    
    for(int i=0;i<ans.size();i++){
        cout<<"{ ";
        for(auto x: ans[i]){
            cout<<x<<" ";
        }
        cout<<"}";
    }
}



int main(){
    vector<int>v = {1, 2, 3};
    subSet(v);
}