#include <iostream>
using namespace std;
class well
{
public:
    well *next = NULL;
    int data;
};
void add_beg(well **tail, int num)
{
    well *nyu = new well();
    well *tmp = *tail;
    nyu->data = num;
    if (*tail == NULL) //3->1->2
    {
        nyu->next = nyu;
        *tail = nyu;
    }
    else
    {
        nyu->next = tmp->next;
        tmp->next = nyu;
    }
}
void add_last(well **tail, int num)
{
    well *neu_node = new well(); // 2-> 8-> 6
    well *tmp = *tail;
    neu_node->data = num;
    if (*tail == NULL)
    {
        neu_node->next = neu_node;
        *tail = neu_node;
    }
    else
    {
        neu_node->next = tmp->next;
        tmp->next = neu_node;
        *tail = neu_node;
    }
}
void del(well **node, int num)
{
    well *tmp = *node, *p, *t; // 2->3->4->5->6
    do
    {
        t = tmp;
        tmp = tmp->next;
        p = tmp->next;
    } while (tmp->data != num);
    if (tmp == *node)
    {
        t->next = tmp->next;
        delete tmp;
        *node = t;
    }
    else
    {
        tmp->data = tmp->next->data;
        tmp->next = tmp->next->next;
        delete p;
    }
}
void prt(well *tel)
{
    well *p = tel->next;
    do
    {
        cout << p->data << "  ";
        p = p->next;
    } while (p != tel->next);
}
int main()
{
    well *tail = NULL;
    int n;
    do
    {
        cout << "1) Insert at head\n2) Insert at tail\n";
        cin >> n;
        if (n == 1)
        {
            cout << "\nHow many elements you want to enter: ";
            int store;
            cin >> store;
            cout << "\nEnter data: ";
            for (int t = 0; t < store; t++)
            {
                int l;
                cin >> l;
                add_beg(&tail, l);
            }
        }
        if (n == 2)
        {
            cout << "\nHow many elements you want to enter: ";
            int store;
            cin >> store;
            cout << "\nEnter data: ";
            for (int t = 0; t < store; t++)
            {
                int l;
                cin >> l;
                add_last(&tail, l);
            }
        }
    } while (n == 1 || n == 2);
    cout << "\nYour final list is: ";
    prt(tail);
    cout << "\nEnter which element you want to delete: ";
    int k;
    cin >> k;
    del(&tail, k);
    cout << "\nNew list is: ";
    prt(tail);
    return 0;
}

int main()
{
    int arr[5],temp;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<5;i++)            
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}