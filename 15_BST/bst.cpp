#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data = k;
        left = right = NULL;
    }
};

void inOrder(Node *root){
   if(root != NULL){
       inOrder(root->left);
       cout<<root->data<<" ";
       inOrder(root->right);
   }
}

void preOrder(Node *root){
    if(root != NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(Node *root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}


Node *arrayToTree(vector<int>inOrd, vector<int>pre, int start, int end ){
    if(start > end){
        return NULL;
    }
    static int k = 0;
    Node *root = new Node(pre[k++]);
    int i;
    for(i=start;i<=end;i++){
        if(inOrd[i] == root->data){
            break;
        }
    }
    root->left = arrayToTree(inOrd, pre, start, i-1);
    root->right = arrayToTree(inOrd, pre, i+1, end);
    return root;    
}


bool searchBST(Node *root, int key){
    if(root == NULL) return false;
    if(root->data == key) return true;
    if(key < root->data) {
        return searchBST(root->left, key);
    } else{
        return searchBST(root->right, key);
    }
}

bool searchBSTIterative(Node *root, int key){
    while(root != NULL){
        if(root->data == key){
            return true;
        }
        if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return false;
}

Node * insertInBST(Node *root, int key){
    if(root == NULL){
        Node *newRoot = new Node(key);
        return newRoot;
    } 
    if(root->data == key) return root;
    if(key < root->data){
        root->left = insertInBST(root->left, key);
    }
    else{
        root->right = insertInBST(root->right, key);
    }
    return root;
}

Node * insertInBSTIterative(Node *root, int key){
    Node *newRoot = new Node(key);
    if(root == NULL){
        return newRoot;
    }
    Node*curr = root;
    while(curr != NULL){
        if(curr->data == key) return root;
        if(key < curr->data){
            if(curr->left == NULL){
                curr->left = newRoot;
                return root;
            } else{
                curr = curr->left;
            }
        }else{
            if(curr->right == NULL){
                curr->right = newRoot;
                return root;
            }
            else{
                curr = curr->right;
            }
        }
    }
}

Node * getSuccessor(Node *root){
    root = root->right;
    while (root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

Node *deleteInBST(Node *root, int key){
    if(root == NULL) return NULL;
    if(root->data > key){
        root->left = deleteInBST(root->left, key);
    } else if(root->data < key){
        root->right = deleteInBST(root->right, key);
    }else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = deleteInBST(root->right, succ->data);
        }
    }
    return root;
}

Node * floorOfTree(Node *root, int key){
    if(root == NULL) return root;
    Node *res = NULL;
    while(root != NULL){
        if(root->data == key){
            return root;
        }
        if((res == NULL && root->data < key ) || root->data > res->data && root->data < key){
            res = root;
        }
        if(root->data < key){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return res;
}

Node *ceilOfTree(Node *root, int key){
    if(root == NULL) return NULL;
    Node *res = NULL;
    while(root != NULL){
        if(root->data == key) return root;
        if(res == NULL && root->data > key || root->data > key && root->data < res->data ){
            res = root;
        }
        if(root->data > key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return res;
}

void printKth(Node *root, int k, int &count){
    if(root != NULL){
        printKth(root->left, k, count);
        count++;
        if(count==k){
            cout<<root->data;
            return;
        }
        printKth(root->right, k, count);
    }
}

int forBST = INT_MIN;
bool checkForBST(Node *root){
    if(root == NULL) return true;
    if(checkForBST(root->left) == false) return false;
    if(forBST >= root->data) return false;
    forBST = root->data;
    return checkForBST(root->right);
}

int main(){

    vector<int>inOrd = {12, 10, 30};
    vector<int>pre =   {10, 12, 30};
    Node *root = arrayToTree(inOrd, pre, 0, inOrd.size() - 1);
    cout<<checkForBST(root);
}