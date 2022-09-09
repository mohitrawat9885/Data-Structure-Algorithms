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

int isBalancedTree(Node *root){
    if(root == NULL){
        return 0;
    }
    int lh = isBalancedTree(root->left);
    if(lh == -1){
        return -1;
    }
    int rh = isBalancedTree(root->right);
    if(rh == -1){
        return -1;
    }
    if(abs(lh-rh) > 1){
        return -1;
    }
    return 1+max(lh, rh);
}
int main(){
    // Node *root = new Node(3);   
    // root->left = new Node(4);
    // root->left->left = new Node(5);
    // root->left->right = new Node(9);
    // root->left->right->left = new Node(9);
    // root->left->right->right = new Node(9);

    // root->right = new Node(8);
    // root->right->right = new Node(7);
    //root->right->right->left = new Node(6);


    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->left->right = new Node(3);

    Node *root = new Node(9);
    root->left = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(8);
    root->left->left->right = new Node(8);
    root->left->left->right->left = new Node(8);
    root->left->left->right->right = new Node(8);
    root->left->right = new Node(10);
    root->left->right->left = new Node(10);
    root->left->right->left->right = new Node(10);


    cout<<isBalancedTree(root);
}

