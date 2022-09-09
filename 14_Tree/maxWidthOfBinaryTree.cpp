#include<iostream>
#include<queue>
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

int maxWidthOfBinaryTree(Node *root){
    if(root == NULL){
        return 0;
    }
    queue<Node *>q;
    q.push(root);
    int mWidth = 0;
    while(!q.empty()){
        int len = q.size();
        mWidth = max(mWidth, len);
        for(int i=0;i<len;i++){
            Node *curr = q.front();
            q.pop();
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
    return mWidth;
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->left->left= new Node(80);
    
    root->right = new Node(30);
    root->right->left = new Node(70);
    root->right->right = new Node(60);

    cout<<maxWidthOfBinaryTree(root);
}
