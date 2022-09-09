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

Node *lowestCommonAnsistor(Node *root, int x, int y){
    if(root == NULL){
        return root;
    }
    if(root->data == x){
        return root;
    }
    if(root->data == y){
        return root;
    }
    Node * ld = lowestCommonAnsistor(root->left, x, y);
    Node * rd = lowestCommonAnsistor(root->right, x, y);
    if(ld != NULL && rd != NULL){
        return root;
    }
    return ((ld != NULL) ? ld : rd);
}
int main(){
    Node *root = new Node(10);

    root->left = new Node(20);
    root->left->left = new Node(30);
    root->left->left->left = new Node(40);
    root->left->left->right = new Node(50);
    root->left->right = new Node(60);
    root->left->right->left = new Node(100);

    root->right = new Node(70);
    root->right->left = new Node(80);
    root->right->right = new Node(90);

    int x, y;
    cin>>x>>y;
    Node *a = lowestCommonAnsistor(root, x, y);
    cout<<a->data;
}