#include<iostream>
#include<queue>
#include<stack>
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

void levelOrderInSpiral(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node *>q;
    stack<int>s;
    bool reverse = false;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node *curr = q.front();
            q.pop();
            if(reverse){
                s.push(curr->data);
            }
            else{
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        if(reverse){
            while (!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }            
        }
        reverse = !reverse;
        cout<<endl;
    }
}

void levelOrderInSpiral2(Node *root){
    if(root == NULL){
        return;
    }
    stack<Node *>s1, s2;
    s1.push(root);
    while((!s1.empty()) || (!s2.empty())){
        if(!s1.empty()){
            int n = s1.size();
            for(int i=0;i<n;i++){
                Node *curr = s1.top();
                s1.pop();
                cout<<curr->data<<" ";
                if(curr->left != NULL){
                    s2.push(curr->left);
                }
                if(curr->right != NULL){
                    s2.push(curr->right);
                }
            }
        }
        if(!s2.empty()){
            int n = s2.size();
            for(int i=0;i<n;i++){
                Node *curr = s2.top();
                s2.pop();
                cout<<curr->data<<" ";
                if(curr->right != NULL){
                    s1.push(curr->right);
                }
                if(curr->left  != NULL){
                    s1.push(curr->left);
                }
            }
        }
    }
}
int main(){
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->left->left = new Node(10);
    

    levelOrderInSpiral2(root);
}