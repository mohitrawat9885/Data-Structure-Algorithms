#include<iostream>
#include<climits>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

int maxInBinaryTree(Node *root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(max(root->data, maxInBinaryTree(root->left)), maxInBinaryTree(root->right));
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    cout << maxInBinaryTree(root);
}