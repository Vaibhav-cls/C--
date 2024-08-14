#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node
{
public:
    Node *next, *link;
    int num;
};
bool isLoop(Node* head){
    
}
void push_in(Node **hed, int data) // insert at head
{
    Node *nav_node = new Node();
    nav_node->num = data;
    nav_node->next = *hed;
    *hed = nav_node;
}

void print(Node *he)
{
    while (he != NULL)
    {
        cout << he->num << " ";
        he = he->next;
    }
}

void ins_last(Node **had, int data)                                     // insert at Tail
{
    Node *nav_node = new Node();
    Node *last = *had;
    nav_node->num = data;
    nav_node->next = NULL;
    if (*had == NULL)
    {
        *had = nav_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = nav_node;
}
void del(Node **head, int data)
{
    Node *niu_node, *old = NULL;
    niu_node = *head;
    if (*head == NULL)
        return;
    if (*head != NULL && niu_node->num == data)
    {
        *head = niu_node->next;
        delete niu_node;
        return;
    }
    else
    {
        while (*head != NULL && niu_node->num != data)
        {
            old = niu_node; // 2->8->77->14->null
            niu_node = niu_node->next;
        }
        old->next = niu_node->next;
        delete niu_node;
    }
}

void srt(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    temp = head;
    vector<int> arr(cnt);
    for (int i = 0; i < cnt; i++)
    {
        arr[i] = temp->num;
        temp = temp->next;
    }
    sort(arr.begin(), arr.end());
    temp = head;
    for (int i = 0; i < cnt; i++)
    {
        temp->num = arr[i];
        temp = temp->next;
    }
    /*for(int i=0;i<cnt-1;i++)                APPROACH OF DIRECTLY SORTING THE LINKED LIST USING POINTERS BUT
    {                                         CODE ISN'T WORKING AS EXPECTED
        temp=head;
        for(int j=0;j<cnt;j++)
        {
            if(temp->num>temp->next->num);
            {
                int tt=temp->num;
                temp->num=temp->next->num;
                temp->next->num=tt;
            }
            temp=temp->next;
        }
    }*/
}
int main()
{
    int h, hh, nym, t;
    Node *head = NULL;
Choblu:
    cout << "Select an option:\n1)Add items to list\n2)Remove item from list\n3)Display current list\n4)Sort the list\n5)Exit\n";
    cin >> h;
    do
    {
        switch (h)
        {
        case 1:
            system("cls");
            cout << "Select:\n1)Insert items from back\n2)Insert items from front\n3)Exit\n";
            cin >> hh;
            switch (hh)
            {
            case 1:
                cout << "\nEnter how many numbers you want to enter: ";
                cin >> nym;
                for (int i = 0; i < nym; i++)
                {
                    cin >> t;
                    ins_last(&head, t);
                }
                break;
            case 2:
                cout << "\nEnter how many numbers you want to enter: ";
                cin >> nym;
                for (int i = 0; i < nym; i++)
                {
                    cin >> t;
                    push_in(&head, t);
                }
                break;
            case 3:
                goto Choblu;
            }
            break;
        case 2:
            cout << "\nEnter which element you want to remove from the list: ";
            int key;
            cin >> key;
            del(&head, key);
            break;
        case 3:
            cout<<"\nYour current list is: ";
            print(head);
            break;
            goto Choblu;
        case 4:
            cout << "\nSorted List is: ";
            srt(head);
            print(head);
            break;
        case 5:
            exit(0);
        default:
            cout << "\nInvalid entry!!";
            break;
        }
    } while (h == 1 || h == 2 || h == 3 || h == 4 || h == 5);
}