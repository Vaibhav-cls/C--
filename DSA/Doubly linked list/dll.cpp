#include <iostream>
using namespace std;

class node
{
public:
    node *next = NULL;
    node *prev = NULL;
    int data;
};

void ins_tail(node **head, int num)
{
    node *niu = new node(), *temp, *pre; // 2->3->4->36->44    7
    temp = *head;
    niu->data = num;
    if (*head == NULL)
    {
        *head = niu;
        return;
    }

    while (temp->next != NULL)
    {
        pre = temp;
        temp = temp->next;
    }
    temp->next = niu;
    niu->prev = temp;
}
void ins_head(node **head, int num)
{
    node *niu = new node(), *temp;
    temp = *head;
    niu->data = num; // 4->5->6->7->8
    niu->next = *head;
    if (*head != NULL)
        temp->prev = niu;
    *head = niu;
}
void print_rev(node *he)
{
    node *te;
    while (he != NULL)
    {
        te = he;
        he = he->next;
    }
    // cout<<te->data;
    while (te != NULL)
    {
        cout << te->data << " ";
        te = te->prev;
    }
}
void print(node *he)
{
    while (he != NULL)
    {
        cout << he->data << " ";
        he = he->next;
    }
}

void del_it(node *head,int key)            //6->7->8->66->90
{
    while(head->data!=key)
    {
        head=head->next;
    }
    head->prev->next=head->next;
    head->next->prev=head->prev;
    delete head;
}

int main()
{
    node *head = NULL;
    int nym,t;                                              // 66->88->100
    cout<< "\nEnter how many numbers you want to enter: ";
    cin >> nym;
    for (int i = 0; i < nym; i++)
    {
        cin >> t;
        ins_tail(&head, t);
    }
    cout << "FORWARD LIST: ";
    // cout<<head->next->prev->next->next->prev->prev->data<<endl;
    print(head);
    cout << "\nREVERSE LIST: ";
    print_rev(head);
    cout<<"\nwhich element you want to delete: ";
    int g;
    cin>>g;
    cout<<"\nNew list :";
    del_it(head,g);
    print(head);
    cout<<endl;
    print_rev(head);
    return 0;
}