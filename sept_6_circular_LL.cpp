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
void insert_end(int x)
{
        struct Node *ptr = head;
        struct Node *newn = new Node;
        newn->data = x;
        while (ptr->next != head)
        {
                ptr = ptr->next;
        }
        newn->next = head;
        ptr->next = newn;
        
}

void delete_begin(){
        struct Node* ptr=head;
        head=head->next;
        delete(ptr);
}

void delete_end(){
        struct Node*ptr=head;
        while (ptr->next->next!=head)
        {
                ptr=ptr->next;
        }
        ptr->next=head;

        
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
        delete_end();
        display();
        return 0;
}
