#include<iostream>
#include<unordered_set>
using namespace std;

int intersectionOfTwoArray(int arr[], int n, int brr[], int m){
    unordered_set<int> us;
    for (int i = 0; i < n;i++){
        us.insert(arr[i]);
    }
    int count = 0;
    for (int i = 0; i < m;i++){
        if(us.find(brr[i]) != us.end()){
            count++;
            us.erase(brr[i]);
        }
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >>arr[i];
    }
    int m;
    cin >> m;
    int brr[m];
    for (int i = 0; i < m;i++){
        cin >> brr[i];
    }
    cout<<intersectionOfTwoArray(arr, n, brr, m);
}