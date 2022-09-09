#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void leftViewOfBinaryTree(Node *root, int level, int a = 10){
    cout << a<<endl;
    if(root == NULL){
        return;
    }
    if(level == 1){
        cout << root->data << " ";
    }
    
    leftViewOfBinaryTree(root->left, 1);
    if(root->left == NULL){
        level = 1;
    }
    else{
        level = 0;
    }
    leftViewOfBinaryTree(root->right, level);
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(50);
    // root->left->left = new Node(40);
    // root->left->right = new Node(50);

    root->right = new Node(60);
    root->right->left = new Node(70);
    root->right->left->right = new Node(8);
    // root->right->left->right = new Node(70);
    // root->right->right = new Node(60);

    //root->right = new Node(50);
    root->right->right = new Node(20);
    //root->right->left->right = new Node(10);

    leftViewOfBinaryTree(root, 1);
}