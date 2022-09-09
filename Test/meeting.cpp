#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>s = {18, 19, 7, 17, 1, 1, 3, 4, 20, 10, 1, 11, 5, 16, 8, 8, 13, 11, 7, 16, 16, 8, 2, 18, 17, 9, 13};
    vector<int>d = {9, 7, 3, 2, 6, 4, 1, 4, 10, 5, 9, 7, 1, 5, 7, 1, 8, 5, 1, 9, 3, 9, 7, 1, 7, 6, 7};

    vector<pair<int, int>> v;

    for(int i=0;i<27;i++){
        v.push_back({s[i]+d[i], s[i]});
    }
    sort(v.begin(), v.end());
    for(auto x:v){
        cout<<"{ "<<x.first<<" , "<<x.second<<" }"<<endl;
    }
}