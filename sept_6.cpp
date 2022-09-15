#include<iostream>
using namespace std;
struct Node{

        int data;
        Node *next;
        Node* prev;
};

struct Node* head=NULL;

int count=0;

void insert_begin(int x){
    struct Node* newn=new Node;
    newn->data=x;
    if (head==NULL)
    {
        newn->prev=NULL;
        newn->next=head;
        head=newn;
    }
    else{
        head->prev=newn;
        newn->next=head;
        head=newn;
    }
    count++;
        
}
void insert_end(int x){
    struct Node* newn=new Node;
    newn->data=x;
    if (head==NULL)
    {
        newn->prev=NULL;
        newn->next=NULL;
        head=newn;
    }
    else{
        struct Node*ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        newn->prev=ptr;
        ptr->next=newn;
        newn->next=NULL;
    }
    count++;
}
void insert_middle(int x,int pos){
    struct Node*ptr=head;
    struct Node* newn=new Node;
    newn->data=x;
    for (int i = 1; i < pos-1; i++)
    {
        ptr=ptr->next;
    }
    ptr->next->prev=newn;
    newn->prev=ptr;
    newn->next=ptr->next;
    ptr->next=newn;
}

void delete_begin(){
    struct Node* ptr=head;
    head=head->next;
    head->prev=NULL;
    delete(ptr);
}
void delete_end(){
    struct Node* ptr=head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    delete(ptr);
}
void delete_middle(int pos){
    struct Node*ptr=head;
    for (int i = 1; i < pos-1; i++)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
    ptr->next->prev=ptr;
}

void sort(){
    struct Node*ptr=head;
    while (ptr->next!=NULL)
    {
        if (ptr->data > ptr->next->data)
        {
            int temp=ptr->data;
            ptr->data=ptr->next->data;
            ptr->next->data=temp;
        }
        ptr=ptr->next;
    }
    
}

void display(){
    struct Node*ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
   }
void display_rev(){
    struct Node*ptr=head;
    cout<<"REVERSE LIST : ";
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    while (ptr!=head->prev)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;
}

int main()
{
    // DOUBLY LINKED LIST
    Node l;
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_middle(40,2);
    display();
    display_rev();
    
    sort();
    cout<<"Sorted List"<<endl;
    display();
    display_rev();

    return 0;
}
 