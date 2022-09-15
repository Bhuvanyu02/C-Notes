#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct Node *head = NULL;
int count = 0;
void insert_begin(int x)
{
    struct Node *ptr = head;
    struct Node *new_n = new Node;
    new_n->data = x;
    new_n->next = head;
    head = new_n;
    count++;
}

void insert_end(int x)
{
    if (head == NULL)
    {
        insert_begin(x);
    }
    else
    {
        struct Node *ptr = head;
        struct Node *newn = new Node;
        newn->data = x;
        newn->next = NULL;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newn;
        count++;
    }
}

void insert_middle(int x, int y)
{
    struct Node *ptr = head;
    if (count < y)
    {
        cout << "PLZ ENTER VALID NUMBER" << endl;
    }
    else
    {
        for (int i = 1; i < y - 1; i++)
        {
            if (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
        }
        struct Node *newn = new Node;
        newn->data = x;
        newn->next = ptr->next;
        ptr->next = newn;
    }
}

void delete_begin(){
    struct Node* ptrr=head;
    head=head->next;
    delete(ptrr);
}

void delete_end(){
    struct Node* ptr=head;
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}


void delete_middle(int val){
    struct Node*ptr=head;
    for (int i = 1; i < val-1; i++)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
    
}

void search(int val){
    struct Node* ptr=head;
    bool chek=false;
    while(ptr!=NULL)
    {
        if (ptr->data==val)
        {
            chek=true;
            break;
        }
        ptr=ptr->next;
    }
    if (chek)
    {
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
    
}


void sort(){
    struct Node* ptr=head;
    while(ptr->next!=NULL){
        if(ptr->data<ptr->next->data){
            int temp=ptr->data;
            ptr->data=ptr->next->data;
            ptr->next->data=temp;
        }
        ptr=ptr->next;
    }
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
    cout<<endl;
}
int main()
{
    // Singly Linked List
    Node l;
    insert_begin(100);
    insert_middle(200,1);
    insert_end(10);
    insert_middle(400,1);
    insert_end(20);
    display();

        // delete_begin();
        // display();

        //     delete_end();
        //     display();
   
        // delete_middle(2);
        // display();
    //search(20);
    sort();
    display();

        
    return 0;
}
