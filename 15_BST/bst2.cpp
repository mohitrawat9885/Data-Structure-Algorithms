#include<iostream>
#include<set>
using namespace std;

void ceilingOnLeftSide(int *arr, int size){
    set<int>s;
    for(int i=0;i<size;i++){
        if(s.upper_bound(arr[i]) != s.end()){
            cout<<(*s.upper_bound(arr[i]))<<" ";
        }else{
            cout<<-1<<" ";
        }
        s.insert(arr[i]);
    }
}

bool checkForBST(Node *root){
    if(root == NULL || (root->left == NULL && root->right == NULL)) return true;
    
}

int main(){
   int arr[] = {2, 8, 30, 15, 25, 12};
    ceilingOnLeftSide(arr, 6);
}