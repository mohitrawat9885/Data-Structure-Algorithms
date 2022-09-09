#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void printKthNodes(Node *root, int k){
    if(root == NULL){
        return;
    }
    if(k == 0){
        cout << root->key << " ";
        return;
    }
    printKthNodes(root->left, k - 1);
    printKthNodes(root->right, k - 1);
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);

    int k;
    cin >> k;
    printKthNodes(root, k);
}