#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

int pTIndex = 0;
Node *arrayToBinaryTree(int it[], int pt[], int is, int ie){
    if(is>ie){
        return NULL;
    }
    Node *root = new Node(pt[pTIndex++]);
    int index = is;
    for(int i=is;i<=ie;i++){
        if(it[i] == root->data){
            break;
        }
        index++;
    }
    root->left = arrayToBinaryTree(it, pt, is, index-1);
    root->right = arrayToBinaryTree(it, pt, index+1, ie);
    return root;
}

void printTreeInOrder(Node *root){
    if(root == NULL){
        return;
    }
    printTreeInOrder(root->left);
    cout<<root->data<<" ";
    printTreeInOrder(root->right);
}
int main(){
    int n;
    cout<<"Enter Array size"<<endl;
    cin>>n;
    int it[n], pt[n];
    cout<<"Enter Inorder Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>it[i];
    }
    cout<<"Enter PreOrder Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>pt[i];
    }
    cout<<"Getting root .."<<endl;
    Node *root = arrayToBinaryTree(it, pt, 0, n-1);
    
    cout<<"InOrder printing..1"<<endl;
    printTreeInOrder(root);
    cout<<"Done printing"<<endl;
}