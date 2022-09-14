#include<iostream>
using namespace std;

int main(){
    string st;
    cin>>st;
    int arr[26] = {0};
    for(int i=0;i<st.length();i++){
        arr[st[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i] != 0){
            cout << (char)(i+'a')<<" "<<arr[i]<<endl;
        }
    }
}