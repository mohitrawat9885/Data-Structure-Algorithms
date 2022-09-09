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


class Solution{
    Node *prev = NULL;
    public:
    
    Node * binaryTreeToDoublyLinkedList(Node *root){
  if(root == NULL){
      return root;
  }
  
  
  Node *head = binaryTreeToDoublyLinkedList(root->left);
  if(prev == NULL){
      head = root;
  }
  else{
      prev->right = root;
      root->left = prev;
  }
  prev = root;
  binaryTreeToDoublyLinkedList(root->right);
  return head;
}

};


// Node *binaryTreeToDoublyLinkedList(Node *root){
//     Node *tail = binaryTreeToDoublyLinkedList2(root);
//     while (tail->left!= NULL)
//     {
//         tail = tail->left;
//     }
//     return tail;
// }

void printList(Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->right;
    }
}
int main(){
    Node *root = new Node(10);
    // root->left = new Node(5);
    // root->right = new Node(20);
    // root->right->left = new Node(30);
    // root->right->right = new Node(33);

    root->left = new Node(8);
    root->left->left = new Node(7);
    root->right = new Node(11);

    Solution s;
    Node *head = s.binaryTreeToDoublyLinkedList(root);
    //cout<<"Head data "<<head->data<<endl;
    printList(head);
}
