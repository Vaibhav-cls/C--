#include <iostream.h>
using namespace std;
int track = -1, size;

class fun
{
public:
    int data;
    fun *next;
};

fun *head = NULL;

void add(fun **he, int num)
{
   fun *new_el=new fun();
   fun *tmp;
   new_el->data=num;
   
   if(*he==NULL)
   {
       track++;
       *he=new_el;
       tmp=new_el;
       new_el->next=NULL;
       return;
   }
   new_el->next=*he;
   *he=new_el;
   track++;
}
void remove(fun **lupin)
{
    fun *tmp = *lupin;
    *lupin=tmp->next;
    delete tmp;
}
void pop()
{
    if (track == -1)
    {
        cout << "\nStack underflow!\n";
        return;
    }
    remove(&head);
    --track;
}

void print(fun *hu)
{
    fun *ukp = hu;
    while (ukp!= NULL)
    {
        cout << ukp->data << " ";
        ukp = ukp->next;
    }
}

void push(int num)
{
    if (track == (size - 1))
    {
        cout << "\nStack overflow!\nElement cannot be pushed!!\n";
        cout<<"\nIf you wish you can pop one element!\nWould you like to pop? (Y/N)";
        char ans;
        cin>>ans;
        tolower(ans);
        if(ans=='y')
        pop();
        return;
    }
    add(&head, num);
    cout<<"\nElement pushed successfully!\n";
}

int main()
{
     int choice, r;
    cout << "Specify the size of your stack: ";
    cin >> size;
    do
    {
        cout << "\n1. Push\n2. Pop\n3. Print list\n4. Exit\n";
        cin >> choice;
    
        if(choice==1)
        {
            cout << "\nEnter element to be pushed: ";
            cin >> r;
            push(r);
        }
        else if(choice==2)
        {
            cout << "\nElement popped successfully!\n";
            pop();
        }
        else if(choice==3)
        {
            print(head);
        }
        else if(choice==4)
            exit(1);
        else
        {
            cout << "\nWrong choice!";
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}