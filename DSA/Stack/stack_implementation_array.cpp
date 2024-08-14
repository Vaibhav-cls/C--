#include<iostream.h>
#define MAX 5
int stack_arr[MAX];
int top = -1;
using namespace std;

bool isfull()
{
    if(top==(MAX-1))
    return true;
    else 
    return false;
}

bool isempty()
{
    if(top==-1)
    return true;
    else 
    return false;
}
void push(int data)
{
    if(isfull())
    {
        cout<<"Stack overflow at "<<data<<"\n";
        return;
    }
    top++;
    stack_arr[top]=data;
}

void pop(void)
{
    if(isempty())
    {
        cout<<"Stack Underflow!\n";
        return;
    }
    top--;
}


int main()
{
    int value;
    push(23);
    push(34);
    push(44);
    push(12);
    push(20);
    push(24);
    for(int i=top;i>=0;i--)
    cout<<stack_arr[i]<<" ";
    pop();
    pop();
    pop();
    pop();
    pop();
    cout<<"\nAfter pop()\n";
    for(int i=top;i>=0;i--)
    cout<<stack_arr[i]<<" ";
    pop();
    return 0;
}