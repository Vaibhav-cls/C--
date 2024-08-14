//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void insertAtLast(Node** head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* reverse_ll(Node* current, Node* prev=NULL){
    if(current == NULL){
        return prev;
    }
    Node* nextNode = current->next;
    current->next = prev;
    return reverse_ll(nextNode,current);

}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    insertAtLast(&head,34);
    insertAtLast(&head,12);
    insertAtLast(&head,54);
    insertAtLast(&head,24);
    insertAtLast(&head,87);
    print(head);
    Node* newHead = reverse_ll(head);
    cout<<endl;
    print(newHead);
    return 0;
}