#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int count = 0;
struct Node *head = NULL;
void insert_begin(int x)
{
    struct Node *ptr = head;
    struct Node *new_n = new Node;
    new_n->data = x;
    new_n->next = head;
    head = new_n;
}

void display()
{
    Node *ptr = head;
    if (head == NULL)
    {
        cout << "LIST UNDER-FLOW" << endl;
    }
    else
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}
void newlist(){
    int arr[count];
    struct Node*ptr=head;
    int i=0;
    while (ptr!=NULL)
    {
        if (ptr->data!=991400)
        {
            arr[i]=ptr->data;
            i++;
        }
        ptr=ptr->next;
    }
    head=NULL;
    for ( int i1 = 0; i1 < i; i1++)
    {
        insert_begin(arr[i1]);
    }
    display();
    
}
void sum0()
{
    int sum = 0;
    
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    if (count == 3)
    {
        ptr = head;
        struct Node *ptr2 = ptr->next;
        struct Node *ptr3 = ptr2->next;

        if (ptr->data + ptr2->data + ptr3->data == 0)
        {
            ptr->data = 991400;
            ptr2->data = 991400;
            ptr3->data = 991400;
            head = NULL;
        }
        else if (ptr->data + ptr2->data == 0)
        {
            head = ptr3;
        }
        else if (ptr2->data + ptr3->data == 0)
        {
            ptr->next = NULL;
        }
        else if (ptr->data + ptr3->data == 0)
        {
            head = ptr2;
            ptr2->next = NULL;
        }
    }
    else if (count == 2)
    {
        ptr = head;
        struct Node *ptr2 = ptr->next;
        if (ptr->data + ptr2->data == 0)
        {
            ptr2->data = 991400;
            ptr->data = 991400;
        }
        head = NULL;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            struct Node *ptr2 = ptr->next;
            struct Node *ptr3 = ptr2->next;
            while (ptr3 != NULL)
            {
                if (ptr2->data + ptr3->data == 0)
                {
                    ptr2->data = 991400;
                    ptr3->data = 991400;
                }
                if (ptr2->data + ptr->data == 0)
                {
                    ptr2->data = 991400;
                    ptr->data = 991400;
                }
                if (ptr->data + ptr3->data == 0)
                {
                    ptr->data = 991400;
                    ptr3->data = 991400;
                }
                if (ptr->data + ptr2->data + ptr3->data == 0)
                {
                    ptr->data = 991400;
                    ptr2->data = 991400;
                    ptr3->data = 991400;
                }
                ptr3 = ptr3->next;
            }
            while (ptr2 != NULL)
            {
                if (ptr2->data + ptr->data == 0)
                {
                    ptr2->data = 991400;
                    ptr->data = 991400;
                }
                ptr2 = ptr2->next;
            }
            if (ptr->data == 0)
            {
                ptr->data = 991400;
            }
            ptr = ptr->next;
        }
    }
}

int main()
{
    // Singly Linked List
    Node l;
    insert_begin(90);
    insert_begin(-30);
    insert_begin(-45);
    insert_begin(-45);
    display();
    sum0();
    newlist();
    return 0;
}
