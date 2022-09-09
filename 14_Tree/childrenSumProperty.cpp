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

bool childSumProperty(Node *root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    int sum = 0;
    if(root->left != NULL){
        sum += root->left->data;
    }
    if(root->right != NULL){
        sum += root->right->data;
    }

    return (sum == root->data) && (childSumProperty(root->left) && childSumProperty(root->right));
}

int main(){
    // Node *root = new Node(20);
    // root->left = new Node(8);
    // root->left->left = new Node(3);
    // root->left->right = new Node(5);
    // root->right = new Node(12);

    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(1);
    root->right->right = new Node(2);

    cout << ((childSumProperty(root)) ? "Yes" : "NO");
}