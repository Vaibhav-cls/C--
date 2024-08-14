#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// class NodeLL{
//     public:
//         NodeLL *link;
//         int data;
//         // NodeLL(int data){
//         //     this->data = data;
//         //     this->link = NULL;
//         // }
// };
// void printLL(NodeLL* head){
//     NodeLL *temp;
//     temp=head;
//     while(temp!=NULL){
//         cout<< temp->data<<" ";
//         temp = temp->link;
//     }
// }
// void ll_InsertAtFirst(NodeLL** head , int val){
//     NodeLL *temp = new NodeLL();
//     temp->data = val;
//     temp->link = *head;
//     *head = temp;
// }
// void ll_InsertAtLast(NodeLL** head, int val){
//     NodeLL *temp = new NodeLL();
//     temp->data = val;
//     temp->link = NULL;
//     NodeLL *tail = *head;
//     while(tail->link!=NULL){
//         tail = tail->link;
//     }
//     tail->link = temp;
// }
// NodeLL* ll_Reverse(NodeLL** head){
//     NodeLL *prev = NULL;
//     NodeLL *next = NULL;
//     NodeLL *current = *head;
//     while(current!=NULL){
//         next = current->link;
//         current->link = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }

class NodeDL
{
public:
    NodeDL *prev = NULL;
    NodeDL *next = NULL;
    int data;
};
void dl_InsertAtFirst(NodeDL **head, int val)
{
    NodeDL *newNode = new NodeDL();
    NodeDL *temp = *head;
    if(temp!=NULL){
    temp->prev = newNode;
    }
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}
void printDL(NodeDL *head)
{
    NodeDL *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void DL_reverse(NodeDL *head)
{
    NodeDL *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}
int main()
{
    NodeDL *head = NULL;
    dl_InsertAtFirst(&head, 5);
    dl_InsertAtFirst(&head, 6);
    dl_InsertAtFirst(&head, 33);
    dl_InsertAtFirst(&head, 12);
    cout << "Forward list: ";
    printDL(head);
    cout << endl
    << "Reverse list: ";
    DL_reverse(head);
    // NodeDL* ptr = head->next;
    // cout<< ptr->prev->data;
    // dl_InsertAtLast(&head,75);
    // dl_InsertAtLast(&head,1);
    // dl_InsertAtLast(&head,20);
    // dl_InsertAtLast(&head,89);
    // printLL(head);
    // cout<<"Reverse is:\n";
    // NodeLL* rev = ll_Reverse(&head);
    // printLL(rev);
}