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
int dia = 0;
int diameterOfTree(Node *root){
    if(root ==  NULL){
        return 0;
    }
    int lh = diameterOfTree(root->left);
    int rh = diameterOfTree(root->right);
    dia = max(dia, (1+lh+rh));
    return max(lh, rh)+1;
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(60);
    root->left->left = new Node(30);
    root->left->left->right = new Node(50);
    root->left->left->left = new Node(40);
    root->left->left->left->left = new Node(60);

    root->left->right = new Node(80);
    root->left->right->right = new Node(90);
    root->left->right->right->right = new Node(18);

    diameterOfTree(root);
    cout<<dia;
    
}