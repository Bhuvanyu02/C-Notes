#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *head = NULL;
void insert_begin(int x)
{
    struct Node *newn = new Node;
    newn->data = x;
    newn->next = head;
    head = newn;
}
void change()
{
    struct Node *ptr = head;
    struct Node *ptr2 = head->next;

    while (ptr2->next != NULL && ptr!=NULL)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    ptr->next=NULL;
    ptr2->next = head;
    head=ptr2;
    
    
    while(ptr2!=NULL){
    cout<<ptr2->data<<" ";
    ptr2=ptr2->next;
  }
}
void display()
{
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    Node l;
    insert_begin(10);
    insert_begin(20);
    insert_begin(30);
    display();

    change();
    return 0;
}
