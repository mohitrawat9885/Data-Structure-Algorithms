#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node * exchangeHeadtoEnd(Node *head){
    Node *curr = head;
    Node *p = head;
    Node *q = NULL;
    while(p->next != NULL){
        q = p;
        p = p->next;
    }
    q->next = head;
    p->next = head->next;
    head->next = NULL;
    head = p;

    return head;
}

int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head = exchangeHeadtoEnd(head);

    while (head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}