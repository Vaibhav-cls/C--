#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
void delay(int no_of_seconds)
{
    int miliseconds = 1000 * no_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + miliseconds)
        ;
}
void refresh()
{
    printf("\nRefreshing");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        delay(1);
    }
}
/* ARRAY AND IT'S OPERATIONS (INSERTION,DELETION,SEARCHING,SORTING)*/
int array[100];
static int size = 0;
void swap(int i, int j)
{
    int temp;
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
void insertion(int position, int data)
{
    for (int i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = data;
    size++;
    printf("\nDONE\n");
}
void deletion(int position)
{
    for (int i = position - 1; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    printf("\nDONE\n");
}
int binary_search(int lower_bound, int upper_bound, int key)
{
    if (lower_bound > upper_bound)
        return -1;
    else
    {
        int mid = (lower_bound + upper_bound) / 2;
        if (key == array[mid])
            return mid;
        else if (key > array[mid])
            binary_search(mid + 1, upper_bound, key);
        else if (key < array[mid])
            binary_search(lower_bound, mid - 1, key);
    }
}
int linear_search(int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return 0;
}

void bubble_sort()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] >= array[j + 1])
                swap(j, j + 1);
        }
    }
}
void selection_sort()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] >= array[j])
                swap(i, j);
        }
    }
}
void insertion_sort()
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}
/* lINEAR LINKED LIST ALL OPERATIONS  INSERT(AT FIRST,LAST,AFTER SPECIFIC) NODE  &&
   DELETE(FIRST,LAST,SPECIFIC) NODE */

void sll_InsertAtStart(int key,struct node **ptr)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)),*t;
    t= *ptr;
    n->data = key;
    n->next = t;
    t = n;
    printf("\nDONE\n");
}

void sll_InsertAtLast(int key,struct node **ptr)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)), *t;
    t = *ptr;
    n->data = key;
    n->next = NULL;
    if (t == NULL)
    {
        *ptr = n;
        return;
    }
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = n;
    printf("\nDONE\n");
}

void sll_InsertAfterNode(int key, int position_data,struct node **ptr)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)), *t;
    t = *ptr;
    n->data = key;
    while (t->data != position_data)
    {
        t = t->next;
    }
    if (t->data != position_data)
    {
        printf("\n%d not found!!\n", position_data);
    }
    else
    {
        n->next = t->next;
        t->next = n;
        printf("\nDONE\n");
    }
}

void sll_DeleteAtStart(struct node **ptr)
{
    struct node *t;
    t= *ptr;
    if(t==NULL){
        printf("\nEMPTY LIST !!\n");
        return;
    }
    *ptr = t->next;
    free(t);
}

void sll_DeleteAtLast(struct node **ptr)
{
    struct node *t, *p;
    t = *ptr;
    if(t==NULL)
    {
        printf("\nEMPTY LIST !!\n");
        return;
    }
    else if(t->next==NULL)
    {
        free(t->next);
        t=NULL;
    }
    while (t->next != NULL)
    {
        p = t;
        t = t->next;
    }
    p->next = NULL;
    free(t);
}

void sll_DeleteSpecificNode(int key,struct node **ptr)
{
    struct node *t, *p;
    t = *ptr;
    if(t==NULL){
        printf("\nEMPTY LIST !!\n");
        return;
    }
    while (t->data != key)
    {
        p = t;
        t = t->next;
    }
    p->next = p->next->next;
    free(t);
}

/* DOUBLY LINKED LIST ALL OPERATIONS  INSERT(AT FIRST,LAST,AFTER SPECIFIC) NODE  &&
   DELETE(FIRST,LAST,SPECIFIC) NODE */

struct node *head2 = NULL;

void dll_InsertAtStart(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->prev = NULL;
    n->data = key;
    n->next = head2;
    if (head2 != NULL)
    {
        head2->prev = n;
    }
    head2 = n;
    printf("\nDONE\n");
}

void dll_InsertAtLast(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)), *t;
    t = head2;
    n->data = key;
    n->next = NULL;
    n->prev = NULL;
    if (t == NULL)
    {
        head2 = n;
        return;
    }
    while (t->next != NULL)
    {
        t = t->next;
    }
    n->prev = t;
    t->next = n;
    printf("\nDONE\n");
}

void dll_InsertAfterNode(int key, int position_data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)), *t, *p;
    n->data = key;
    n->next = NULL;
    n->prev = NULL;
    t = head2;
    while (t->data != position_data && t->next != NULL)
    {
        p = t;
        t = t->next;
    }
    if (t->data != position_data)
    {
        printf("\n%d not found!!\n", position_data);
    }
    else
    {
        n->next = t->next;
        t->next->prev = n;
        n->prev = t;
        t->next = n;
        printf("\nDONE\n");
    }
}

void dll_DeleteAtStart()
{
    struct node *t;
    t = head2;
    head2 = head2->next;
    head2->prev = NULL;
    free(t);
}

void dll_DeleteAtLast()
{
    struct node *t, *p;
    t = head2;
    while (t->next != NULL)
    {
        p = t;
        t = t->next;
    }
    p->next = NULL;
    free(t);
}

void dll_DeleteSpecificNode(int key)
{
    struct node *t, *p, *q;
    p = t = head2;
    while (t->data != key && t->next != NULL)
    {
        p = t;
        t = t->next;
    }
    if (t->data != key)
    {
        printf("\nElement not found!!\n");
    }
    else if (t == head2)
    {
        dll_DeleteAtStart();
    }
    else if (t->next == NULL)
    {
        dll_DeleteAtLast();
    }
    else
    {
        p->next = t->next;
        t->next->prev = p;
        free(t);
    }
}

/* CIRCULAR SINGLY LINKED LIST ALL OPERATIONS  INSERT(AT FIRST,LAST,AFTER SPECIFIC) NODE  &&
   DELETE(FIRST,LAST,SPECIFIC) NODE */
struct node *head3 = NULL, *tail3 = NULL;
void csll_InsertAtStart(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = key;
    if (!tail3)
    {
        tail3 = n;
        tail3->next = n;
    }
    else
    {
        n->next = tail3->next;
        tail3->next = n;
        head3 = n;
    }
    printf("\nDONE\n");
}

void csll_InsertAtLast(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node)), *t = head3;
    n->data = key;
    if (!tail3)
    {
        tail3 = n;
        head3 = n;
        tail3->next = n;
    }
    else
    {
        n->next = tail3->next;
        tail3->next = n;
        tail3 = n;
    }
    printf("\nDONE\n");
}

void csll_InsertAfterNode(int key, int position_data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    struct node *t = head3; // 8 11 22 7 5 (10)
    n->data = key;
    while (t->data != position_data && t != tail3)
    {
        t = t->next;
    }
    if (t->data != position_data)
    {
        printf("\n%d not found!!\n", position_data);
    }
    else
    {
        if (t == tail3)
        {
            csll_InsertAtLast(key);
        }
        else
        {
            n->next = t->next;
            t->next = n;
        }
        printf("\nDONE\n");
    }
}
void csll_DeleteStart()
{
    struct node *t;
    t = head3;
    if (head3 == NULL)
        printf("\nUnderflow !!\n");
    else
    {
        tail3->next = head3->next;
        head3 = head3->next;
        free(t);
    }
}
void csll_DeleteLast()
{
    struct node *t;
    t = head3;
    if (head3 == NULL)
        printf("\nUnderflow\n");
    else
    {
        while (t->next != tail3)
        {
            t = t->next;
        }
        t->next = head3;
        free(tail3);
        tail3 = t;
    }
}
void csll_DeleteSpecificNode(int key)
{
    struct node *t, *p;
    t = head3;
    while (t->data != key && t->next != head3)
    {
        p = t;
        t = t->next;
    }
    p->next = t->next;
}
/* STACK IMPLEMENTATION USING ARRAY AND IT'S OPERATIONS(PUSH,POP)*/
int top = -1;
void push(int arr[], int data, int capacity)
{
    if (top == capacity - 1)
    {
        printf("\nCannot insert %d, Stack is full !\n", data);
    }
    else
    {
        top++;
        arr[top] = data;
        printf("\nDONE");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUnable to pop element as the stack is empty\n");
    }
    else
    {
        top--;
        printf("\nDONE");
    }
}

/* QUEUE IMPLEMENTATION USING ARRAY AND IT'S OPERATIONS(ENQUEUE,DEQUEUE)*/
int front = -1, rear = -1;
void enqueue(int arr[], int data, int n)
{
    if (rear == n - 1)
        printf("\nSorry no space in the queue !!\n");
    else if (rear == -1)
    {
        rear++;
        front++;
        arr[rear] = data;
    }
    else
        arr[++rear] = data;
}
void dequeue(int arr[])
{
    if (front == -1)
    {
        printf("\nOops there's no element in the queue to delete !!");
    }
    else if (rear == front)
    {
        rear = front = -1;
    }
    else
        front++;
}

// SECTION TO PRINT THE LISTS...
void print_array()
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
void print_queue(int arr[])
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
}
void print_stack(int arr[])
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}
void print_csll(struct node *start)
{
    struct node *t = head3;
    while (t != tail3)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("%d", t->data);
}
void print_reverse(struct node *start)
{
    struct node *t;
    t = start;
    while (t->next != NULL)
    {
        t = t->next;
    }
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->prev;
    }
}
void print(struct node *start)
{
    struct node *t;
    t = start;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}
// array, linked list , stack ,queue , tree , graph
int main()
{
    struct node *head1 = NULL,*top1 = NULL;
    /*int opt1, opt2, opt3, opt4, item, pos, reply, it = 0, it1 = 0,it2=0, key,n;
    int stack[100];
    do
    {
    super:
        printf("DATA STRUCTURES...\n\n1)ARRAY\n2)LINKED LIST\n3)STACK\n4)QUEUE\n5)EXIT\n");
        scanf("%d", &opt1);
        switch (opt1)
        {
        case 1:
            do
            {
                system("cls");
                if (it == 0)
                {
                    printf("\nENTER THE SIZE OF ARRAY: ");
                    scanf("%d", &size);
                    printf("\nENTER THE ELEMENTS OF ARRAY: ");
                    it++;
                    for (int i = 0; i < size; i++)
                        scanf("%d", &array[i]);
                }
            sub_super:
                printf("CHOOSE ANY ONE ARRAY OPERATION...");
                printf("\n1)INSERTION\n2)DELETION\n3)SORTING\n4)SEARCHING\n5)PRINT ARRAY\n6)GO BACK TO MAIN MENU\n=> ");
                scanf("%d", &opt2);
                switch (opt2)
                {
                case 1:
                    printf("\nENTER THE ELEMENT YOU WANT TO INSERT AND AT WHICH POSTION : ");
                    scanf("%d %d", &item, &pos);
                    insertion(pos, item);
                    refresh();
                    break;
                case 2:
                    printf("\nENTER THE POSTION OF THE ELEMENT YOU WANT TO DELETE: ");
                    scanf("%d", &pos);
                    deletion(pos);
                    refresh();
                    break;
                case 3:
                    do
                    {
                        system("cls");
                        printf("CHOOSE THE TYPE OF SORTING...\n1)SELECTION SORT\n2)INSERTION SORT\n3)BUBBLE SORT\n4)PRINT ARRAY\n5)GO BACK\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            selection_sort();
                            printf("\nDONE !!\n");
                            refresh();
                            break;
                        case 2:
                            insertion_sort();
                            printf("\nDONE !!\n");
                            refresh();
                            break;
                        case 3:
                            bubble_sort();
                            printf("\nDONE !!\n");
                            refresh();
                            break;
                        case 4:
                            print_array();
                            refresh();
                            break;
                        case 5:
                            goto sub_super;
                            refresh();
                            break;
                        deafult:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 5);
                    break;
                case 4:
                    system("cls");
                    printf("CHOOSE THE TYPE OF SEARCHING YOU WANT TO PERFORM:\n1)LINEAR SEARCH\n2)BINARY SEARCH\n3)GO BACK\n=> ");
                    scanf("%d", &opt3);
                    do
                    {
                        switch (opt3)
                        {
                        case 1:
                            printf("ENTER THE ELEMENT YOU WANT TO SEARCH: ");
                            scanf("%d", item);
                            reply = linear_search(item);
                            if (reply == 0)
                                printf("\n %d NOT FOUND IN THE ARRAY !!", item);
                            else
                                printf("ELEMENT FOUND AT: %d", reply + 1);
                            refresh();
                            break;
                        case 2:
                            printf("ENTER THE ELEMENT YOU WANT TO SEARCH: ");
                            scanf("%d", item);
                            reply = binary_search(0, size - 1, item);
                            (reply == -1) ? printf("\n %d NOT FOUND IN THE ARRAY !!", item) : printf("ELEMENT FOUND AT: %d", reply + 1);
                            refresh();
                            break;
                        case 3:
                            goto sub_super;
                            refresh();
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 3);
                    refresh();
                    break;
                case 5:
                    print_array();
                    refresh();
                    break;
                case 6:
                    goto super;
                    refresh();
                    break;
                default:
                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                    refresh();
                    break;
                }
            } while (opt2 >= 1 && opt2 <= 6);
            break;
        case 2:
            system("cls");
            do
            {
            super_master:
                printf("\nCHOOSE THE OPERATION YOU WANT TO PERFORM...\n1)SINGLY LINKED LIST\n2)DOUBLY LINKED LIST\n3)CIRCULAR lINKED LIST\n4)GO BACK TO MAIN MENU\n=> ");
                scanf("%d", &opt2);
                switch (opt2)
                {
                case 1:
                    do
                    {
                    master:
                        system("cls");
                        printf("CHOOSE ANY ONE OPERATION ON SINGLY LINKED LIST...\n1)INSERTION\n2)DELETION\n3)PRINT LIST\n4)GO BACK TO PREVIOUS MENU\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF INSERTION WOULD YOU PREFER...\n1)INSERT AT START\n2)INSERT AT END\n3)INSERT AFTER SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE START OF THE LIST\n");
                                    scanf("%d", &item);
                                    sll_InsertAtStart(item,&head1);
                                    refresh();
                                    break;
                                case 2:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE END OF THE LIST\n");
                                    scanf("%d", &item);
                                    sll_InsertAtLast(item,&head1);
                                    refresh();
                                    break;
                                case 3:
                                    printf("\nENTER THE DATA AND VALUE OF NODE AFTER WHICH YOU WANT TO INSERT\n");
                                    scanf("%d %d", &item, &pos);
                                    sll_InsertAfterNode(item, pos,&head1);
                                    refresh();
                                    break;
                                case 4:
                                    goto master;
                                    refresh();
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            refresh();
                            break;
                        case 2:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF DELETION WOULD YOU PREFER...\n1)DELETE FROM START\n2)DELETE FROM END\n3)DELETE SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\n DELETING ELEMENT FROM START OF THE LIST: ");
                                    sll_DeleteAtStart(&head1);
                                    refresh();
                                    break;
                                case 2:
                                    printf("\n DELETING ELEMENT FROM END OF THE LIST: ");
                                    sll_DeleteAtLast(&head1);
                                    refresh();
                                    break;
                                case 3:
                                    printf("\n ENTER THE DATA YOU WANT TO DELETE FROM THE LIST: ");
                                    scanf("%d", &item);
                                    sll_DeleteSpecificNode(item,&head1);
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            refresh();
                            break;
                        case 3:
                            print(head1);
                            refresh();
                            break;
                        case 4:
                            goto super_master;
                            refresh();
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 4);
                    break;
                case 2:
                    do
                    {
                    sub_master:
                        system("cls");
                        printf("CHOOSE ANY ONE OPERATION ON DOUBLY LINKED LIST...\n1)INSERTION\n2)DELETION\n3)PRINT LIST\n4)PRINT REVERSE LIST\n5)GO BACK TO PREVIOUS MENU\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF INSERTION WOULD YOU PREFER...\n1)INSERT AT START\n2)INSERT AT END\n3)INSERT AFTER SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE START OF THE LIST\n");
                                    scanf("%d", &item);
                                    dll_InsertAtStart(item);
                                    refresh();
                                    break;
                                case 2:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE END OF THE LIST\n");
                                    scanf("%d", &item);
                                    dll_InsertAtLast(item);
                                    refresh();
                                    break;
                                case 3:
                                    printf("\nENTER THE NODE AFTER WHICH YOU WANT TO ADD DATA , ENTER THE DATA\n");
                                    scanf("%d %d", &pos, &item);
                                    dll_InsertAfterNode(item, pos);
                                    refresh();
                                    break;
                                case 4:
                                    goto sub_master;
                                    refresh();
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            refresh();
                            break;
                        case 2:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF DELETION WOULD YOU PREFER...\n1)DELETE FROM START\n2)DELETE FROM END\n3)DELETE SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\n DELETING ELEMENT FROM START OF THE LIST: ");
                                    dll_DeleteAtStart();
                                    refresh();
                                    break;
                                case 2:
                                    printf("\n DELETING ELEMENT FROM END OF THE LIST: ");
                                    dll_DeleteAtLast();
                                    refresh();
                                    break;
                                case 3:
                                    printf("\n ENTER THE DATA YOU WANT TO DELETE FROM THE LIST: ");
                                    scanf("%d", &item);
                                    dll_DeleteSpecificNode(item);
                                    refresh();
                                    break;
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            refresh();
                            break;
                        case 3:
                            print(head1);
                            refresh();
                            break;
                        case 4:
                            print_reverse(head1);
                            refresh();
                            break;
                        case 5:
                            goto super_master;
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 5);
                    break;
                case 3:
                    do
                    {
                    upper:
                        system("cls");
                        printf("CHOOSE ANY ONE OPERATION ON CIRCULAR LINKED LIST...\n1)INSERTION\n2)DELETION\n3)PRINT LIST\n4)GO BACK TO PREVIOUS MENU\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF INSERTION WOULD YOU PREFER...\n1)INSERT AT START\n2)INSERT AT END\n3)INSERT AFTER SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE START OF THE LIST\n");
                                    scanf("%d", &item);
                                    csll_InsertAtStart(item);
                                    refresh();
                                    break;
                                case 2:
                                    printf("\nENTER THE DATA YOU WANT TO ADD AT THE END OF THE LIST\n");
                                    scanf("%d", &item);
                                    csll_InsertAtLast(item);
                                    refresh();
                                    break;
                                case 3:
                                    printf("\nENTER THE NODE AFTER WHICH YOU WANT TO ADD DATA , ENTER THE DATA\n");
                                    scanf("%d %d", &pos, &item);
                                    csll_InsertAfterNode(item, pos);
                                    refresh();
                                    break;
                                case 4:
                                    goto super_master;
                                    refresh();
                                    break;
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            break;
                        case 2:
                            do
                            {
                                system("cls");
                                printf("WHICH TYPE OF DELETION WOULD YOU PREFER...\n1)DELETE FROM START\n2)DELETE FROM END\n3)DELETE SPECIFIC NODE\n4)GO BACK TO PREVIOUS MENU\n=> ");
                                scanf("%d", &opt4);
                                switch (opt4)
                                {
                                case 1:
                                    printf("\n DELETING ELEMENT FROM START OF THE LIST: ");
                                    csll_DeleteStart();
                                    refresh();
                                    break;
                                case 2:
                                    printf("\n DELETING ELEMENT FROM END OF THE LIST: ");
                                    csll_DeleteLast();
                                    refresh();
                                    break;
                                case 3:
                                    printf("\n ENTER THE DATA YOU WANT TO DELETE FROM THE LIST: ");
                                    scanf("%d", &item);
                                    csll_DeleteSpecificNode(item);
                                    refresh();
                                    break;
                                case 4:
                                    goto upper;
                                    refresh();
                                    break;
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                                }
                            } while (opt4 >= 1 && opt4 <= 4);
                            refresh();
                            break;
                        case 3:
                            print_csll(head3);
                            refresh();
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 4);
                    break;
                case 4:
                    goto super;
                    break;
                default:
                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                    refresh();
                    break;
                }

            } while (opt2 >= 1 && opt2 <= 4);
            break;
        case 3:
            system("cls");
            do
            {
            sub_sub_master:
                printf("\nCHOOSE THE TYPE OF IMPLEMENTATION...\n1)IMPLEMENT THROUGH ARRAY\n2)IMPLEMENT THROUGH LINKED LIST\n3)GO BACK TO MAIN MENU\n=> ");
                scanf("%d", &opt2);
                switch (opt2)
                {
                case 1:
                    system("cls");
                    do
                    {
                        system("cls");
                        if (it1 == 0)
                        {
                            printf("\nENTER THE SIZE OF STACK: ");
                            scanf("%d", &n);
                            it1++;
                        }
                        printf("\nSELECT THE OPERATION...\n1)PUSH\n2)POP\n3)PRINT\n4)GO BACK\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            
                            printf("\nENTER THE ELEMENT YOU WANT TO PUSH: ");
                            scanf("%d", &item);
                            push(stack, item, n);
                            refresh();
                            break;
                        case 2:
                            pop();
                            refresh();
                            break;
                        case 3:
                            print_stack(stack);
                            refresh();
                            break;
                        case 4:
                            goto sub_sub_master;
                            refresh();
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 4);
                    refresh();
                    break;
                case 2:
                    do
                    {
                        system("cls");
                        printf("\nSELECT THE OPERATION...\n1)PUSH\n2)POP\n3)PRINT\n4)GO BACK\n=> ");
                        scanf("%d", &opt3);
                        switch (opt3)
                        {
                        case 1:
                            
                            printf("\nENTER THE ELEMENT YOU WANT TO PUSH: ");
                            scanf("%d", &item);
                            sll_InsertAtStart(item,&top1);
                            refresh();
                            break;
                        case 2:
                            sll_DeleteAtStart(&top1);
                            refresh();
                            break;
                        case 3:
                            print(top1);
                            refresh();
                            break;
                        case 4:
                            goto sub_sub_master;
                            refresh();
                            break;
                        default:
                            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                            refresh();
                            break;
                        }
                    } while (opt3 >= 1 && opt3 <= 4);
                    refresh();
                    break;
                case 3:
                    goto super;
                    refresh();
                    break;
                default:
                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                    refresh();
                    break;
                }
            } while (opt2 >= 1 && opt2 <= 3);
            break;
        case 4:
            system("cls");
            do{
                sup:
                printf("\nCHOOSE THE TYPE OF IMPLEMENTATION...\n1)IMPLEMENT THROUGH ARRAY\n2)IMPLEMENT THROUGH LINKED LIST\n3)GO BACK TO MAIN MENU\n=> ");
                scanf("%d", &opt2);
                switch(opt2){
                    case 1:
                        do{
                            system("cls");
                            if(it2==0){
                                printf("\nENTER THE SIZE OF QUEUE: ");
                                scanf("%d",&n);
                                it2++;
                            }
                            int queue[n];
                            printf("\nCHOOSE THE OPERATION YOU WANT TO PERFORM...\n1)ENQUEUE\n2)DEQUEUE\n3)PRINT QUEUE\n4)GO BACK TO PREVIOUS MENU");
                            scanf("%d",&opt3);
                            switch(opt3){
                                case 1:
                                    printf("\nENTER THE VALUE YOU WANT TO ADD IN QUEUE");
                                    scanf("%d",&item);
                                    enqueue(queue,item,n);
                                    refresh();
                                    break;
                                case 2:
                                    dequeue(queue);
                                    refresh();
                                    break;
                                case 3:
                                    print_queue(queue);
                                    refresh();
                                    break;
                                case 4:
                                    goto sup;
                                    refresh();
                                    break;
                                default:
                                    printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
                                    refresh();
                                    break;
                            }
                        }while(opt3>=1 && opt3<=4);
                        break;
                        
                        
                }
            }while(opt2>=1 && opt2<=3);
        default:
            printf("WARNING: PLEASE CHOOSE VALID OPTION : ");
            refresh();
            break;
        }
    } while (opt1 >= 1 && opt1 <= 5);*/
    /*scanf("%d",&size);
    for(int i=0;i<size;i++)
        scanf("%d",&array[i]);
    insertion(6, 10);
    insertion(6, 9);
    insertion(6, 7);
    print_array();
    item =5;
    reply= linear_search(item);
    if(reply==0)
        printf("\n %d NOT FOUND IN THE ARRAY !!",item);
    else
        printf("ELEMENT FOUND AT: %d",reply+1);*/
    sll_InsertAtStart(23,&head1);
    sll_InsertAtStart(1,&head1);
    sll_InsertAtStart(31,&head1);
    sll_InsertAtStart(12,&head1);
    //print(head1);
    printf("%d",head1->data);
    return 0;
}