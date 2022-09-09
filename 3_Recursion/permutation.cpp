#include<bits/stdc++.h>
using namespace std;


void getPermutation(string st, int i, string out){

    if(out.length() == st.length()){
        cout<<out<<endl;
        return;
    }
    for(int j=i;j<st.length();j++){
        string s = st;
        swap(st[i], st[j]);
        getPermutation(st, i+1, out+st[i]);
        // swap(st[i], st[j]);
    }
}

void getPermutationArray(vector<int>arr, int i, vector<vector<int>> &ans){
    if(i >= arr.size()){
        ans.push_back(arr); return;
    }

    for(int j=i;j<arr.size();j++){
        swap(arr[i], arr[j]);
        getPermutationArray(arr, i+1, ans);
        swap(arr[i], arr[j]);
    }
}

void permutation(vector<int>arr){
    vector<vector<int>>ans;
    getPermutationArray(arr, 0, ans);
    for(auto a : ans){
        for(auto b: a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
}
void permutationString(string st){
    // vector<vector<int>>ans;
    
    getPermutation(st, 0, "");
   
}


void stlPermutation(string st){
   
   do{
    cout<<st<<endl;
   }
   while(next_permutation(st.begin(), st.end()));
}


bool my_next_permutation(string &st, int i){

    if(i == st.length()){
        static int count = 0;
        count++;
        if(count == 2) return true;
        return false;
    }

    for(int j=i;j<st.length();j++){
        swap(st[i], st[j]);
        if(my_next_permutation(st, i+1)) {
            return true; 
        }
        swap(st[i], st[j]);
    }
    return false;
}

int main(){
    // string st = "A";
    // vector<int> arr = {1, 2, 3};
    // // permutation(arr);
    // permutationString("ABC");
    // cout<<endl<<"--------------------"<<endl;
    stlPermutation("ABC");
     cout<<endl<<"--------------------"<<endl;
    string st1 = "ACB";
    string st2 = "ACB";
    cout<<"Original " <<st1<<endl;
    my_next_permutation(st1, 0);
    next_permutation(st2.begin(), st2.end());
    cout<<"Per 1 "<< st1<<endl;
    cout<<"Per 2 "<< st2<<endl;

}