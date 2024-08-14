#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node *link;
        int data;
};
void insertAtFirst(Node **head,int value){
    Node *temp = new Node();
    temp->data = value;
    temp->link = *head;
    *head = temp;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->link;
    }
}
Node* recursiveReverse(Node **head){
    Node *temp= *head;
    if(temp ==NULL|| temp->link==NULL){
        return *head;
    }
    Node *newHead = recursiveReverse(&temp->link);
    temp->link->link=*head;
    temp->link =NULL;
    return newHead;
}
void reverse(Node **head){
    Node *prev = NULL;
    Node *current = *head;
    Node *forward = NULL;
    if(current == NULL || current->link == NULL){
        return;  
    }
    while(current!=NULL){
        forward = current->link;
        current->link = prev;
        prev = current;
        current =forward;
    }
}
int main() {
    Node *start = new Node();
    start =NULL;
    insertAtFirst(&start,23);
    insertAtFirst(&start,25);
    insertAtFirst(&start,24);
    insertAtFirst(&start,21);
    insertAtFirst(&start,3);
    insertAtFirst(&start,2);
    insertAtFirst(&start,15);
    print(recursiveReverse(&start));
    //reverse(&start);
    return 0;
}