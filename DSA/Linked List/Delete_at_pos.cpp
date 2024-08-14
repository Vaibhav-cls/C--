#include<iostream.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void ins(node **head,int val)
{
    node *last= *head;
    node* new_node= new node();
    new_node->data=val;
    new_node->next=NULL;
    if(*head ==NULL)
    {
        *head=new_node;
        return;
    }

    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}

void printList(node *Node) 
{ 
    while (Node != NULL) 
    { 
        cout<<" "<<Node->data; 
        Node = Node->next; 
    } 
} 

int main()
{
    node* head=NULL;
    ins(&head,3);
    ins(&head,8);
    printList(head);
    return 0;
}