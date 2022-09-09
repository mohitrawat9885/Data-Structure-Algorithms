#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->data << " ";
        
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

void levelOrder2(Node *root){
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        int len = q.size();
        for (int i = 0; i < len;i++){
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}
int main(){
    Node *root = new Node(10);
    root->left = new Node(15);
    root->left->left = new Node(30);
    root->right = new Node(20);
    root->right->left = new Node(40);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);
    root->right->right = new Node(50);

    levelOrder2(root);
}