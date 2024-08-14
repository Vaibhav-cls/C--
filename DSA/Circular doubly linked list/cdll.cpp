#include<iostream.h>
using namespace std;

class circle
{
    public:
    circle *prev=NULL,*next=NULL;
    int data;
};

void ins_at_beg(circle **node,int num)
{
    circle *new_node= new circle();        // 9<-8<-7
    circle *temp=*node,*head=*node;
    new_node->data=num;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    if(*node==NULL)
    {
        new_node->next=new_node;
        new_node->prev=new_node;
        temp=new_node;head=new_node;
    }
    else
    {
        new_node->next=head;
        new_node->prev=temp;
        temp->next=new_node;
        head->prev=new_node;
        head=new_node;
        // temp->next=new_node;
        // new_node->prev=temp;
        // head->prev=new_node;
        // new_node->next=head;
        // head=new_node;
    }
}

void prt(circle *tel)
{
    circle *p = tel->prev;
    do
    {
        cout << p->data << "  ";
        p = p->next;
    } while (p != tel->next);
}
int main()
{
    circle *tail=NULL;
    ins_at_beg(&tail,56);
    ins_at_beg(&tail,92);
    ins_at_beg(&tail,22);
    cout<<tail->data<<endl;
   // prt(tail);
    return 0;
}