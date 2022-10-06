// TOWER OF HANOI
//  A (Source)  B(Auxilary)  C(Destination)
// #include <bits/stdc++.h>
// using namespace std;
// void TOH(int n, char S, char A, char D)
// {
//     if (n == 1)
//     {
//         cout << "Disk shifted from " << S << " to " << D<<endl;;
//     }
//     else
//     {
//         TOH(n - 1, S, D, A);
//         cout << "Disk shifted from " << S << " to " << D<<endl;
//         TOH(n - 1, A, S, D);
//     }
// }
// int main()
// {
//     // i   ->  Shift n-1 disks from A(Source) to B(auxilary) using C(destination)
//     // ii  ->  Shift Nth disk from A to C
//     // iii ->  Shift n-1 diks from B to C using A
//     int n;
//     cout<<"Enter Number Of Disks "<<endl;
//     cin>>n;
//     TOH(n,'A','B','C');
//     return 0;
// }

//  DEQUEUE   insertion and deletion can be done from both ends(first and last)

// get_front  get_Rear
// empty
// insert_front  insert_rear
// delete_front  delete_rear
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next, *prev;
};
struct Node *front = NULL;
struct Node *rear = NULL;

int size = 0;

bool empty()
{
    return front == NULL;
}

int Size()
{
    return size;
}
int get_front()
{
    if (empty())
    {
        return -1;
    }
    else
    {
        return front->data;
    }
}
int get_rear()
{
    if (empty())
    {
        return -1;
    }
    else
    {
        return rear->data;
    }
}
void insert_front(int data)
{
    struct Node *n = new Node;
    n->data = data;
    n->prev = n->next = NULL;
    if (n == NULL)
    {
        cout << "Over-flow" << endl;
    }
    else if (empty())
    {
        front = rear = n;
    }
    else
    {
        n->next = front;
        front->prev = n;
        front = n;
    }
    size++;
}
void insert_rear(int data)
{
    struct Node *n = new Node;
    n->data = data;
    n->prev = NULL;
    n->next = NULL;
    if (n == NULL)
    {
        cout << "Over-flow" << endl;
    }
    else if (empty())
    {
        front = rear = n;
    }
    else
    {
        n->prev = rear;
        rear->next = n;
        rear = n;
    }
    size++;
}
void delete_front()
{
    if (empty())
    {
        cout << "Under-Flow" << endl;
    }
     else if (front->next == NULL)
    {
        cout<<"Last ELement is Deleted, Now Queue is Empty"<<endl;
        front=rear=NULL;
    }
    struct Node *ptr = front;
    front = front->next;
    front->prev = NULL;
    delete (ptr);
    size--;
}
void delete_rear()
{
    if (empty())
    {
        cout << "Under-Flow" << endl;
    }
    // if only one element
    else if (rear->prev == NULL)
    {
        cout<<"Last ELement is Deleted, Now Queue is Empty"<<endl;
        front=rear=NULL;
    }
    else
    {
        struct Node *ptr = rear;
        rear= rear->prev;
        rear->next = NULL;
        delete (ptr);
    }
    size--;
}
void display(){
    if (empty())
    {
        cout<<"Under-Flow"<<endl;
    }
    
    struct Node* ptr=front;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    
}
int main()
{

    insert_front(10);
    insert_rear(20);
    delete_rear();
    delete_rear();
    return 0;
}
