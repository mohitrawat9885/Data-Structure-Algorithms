#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
void preorder(Node *root){
    if(root!=NULL){
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

void inorderIterative(Node *root){
    stack<Node *>s;
    s.push(root);
    while(!s.empty()){
        Node *curr = s.top();
        while(curr->left!=NULL){
            curr = curr->left;
            s.push(curr);
        }
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right != NULL){
            s.push(curr->right);
        }
        curr = s.top();
        s.pop();
        cout<<curr->key<<" ";
        if(curr->right != NULL){
            s.push(curr->right);
        }
    }
}

void preorderIterative(Node *root){
    stack<Node *>s;
    s.push(root);
    while(!s.empty()){
        Node *curr = s.top();
        cout<<curr->key<<" ";
        while(curr->left != NULL){
            cout<<curr->key<<" ";
            curr = curr->left;
        }
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    inorder(root);
    cout << endl;
    //inorderIterative(root);
    preorderIterative(root);
    // preorder(root);
    // cout << endl;
    // postorder(root);
}