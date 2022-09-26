// QUEUE
//                          Over-flow condn
//    front == 0 && rear==size-1  ||  rear==(front-1)%(size-1)

//              UNDER-FLOW CONDITION
//                  front ==-1

//              ARRAY IMPLEMENTATION OF QUEUE
// #include <bits/stdc++.h>
// using namespace std;

// int q[5];
// int front = -1;
// int rear = -1;
// int size = 5;

// void enqueue(int ele)
// {
//     if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
//     {
//         cout << "Over-flow" << endl;
//     }
//     else if (front == -1)
//     {
//         front = rear = 0;
//         q[rear] = ele;
//     }
//     else if (rear == size - 1 && front != 0)
//     {
//         rear = 0;
//         q[rear] = ele;
//     }
//     else
//     {
//         rear++;
//         q[rear] = ele;
//     }
// }

// void dequeue()
// {
//     if (front == -1)
//     {
//         cout << "Under-flow" << endl;
//         return;
//     }
//     int del = q[front];
//     if (front == rear)
//     {
//         front = rear = -1;
//     }
//     else if (front == size - 1)
//     {
//         front = 0;
//     }
//     else
//     {
//         front++;
//     }
//     cout << "Deleted Element " << del << endl;
// }

// void rev()
// {
//     if (front == -1)
//     {
//         cout << "Under-flow" << endl;
//         return;
//     }
//     else
//     {
//         cout << "Elements : ";
//         if (front <= rear)
//         {
//             for (int i = rear; i >= front; i--)
//             {
//                 cout << q[i] << " ";
//             }
//         }
//         else
//         {
//             for (int i = rear; i >= 0; i--)
//             {
//                 cout << q[i] << " ";
//             }
//             for (int i = size - 1; i >= front; i--)
//             {
//                 cout << q[i] << " ";
//             }
//         }
//     }

//     cout << endl;
// }

// void display()
// {
//     if (front == -1)
//     {
//         cout << "Under-flow" << endl;
//         return;
//     }
//     else
//     {
//         cout << "Elements : ";
//         if (front <= rear)
//         {
//             for (int i = front; i <= rear; i++)
//             {
//                 cout << q[i] << " ";
//             }
//         }
//         else
//         {
//             for (int i = front; i < size; i++)
//             {
//                 cout << q[i] << " ";
//             }
//             for (int i = 0; i <= rear; i++)
//             {
//                 cout << q[i] << " ";
//             }
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     int choice;
//     int ele;
//     do
//     {
//         cout << " 1:Enqueue    2:Dequeue    3:Display  4:Reverse  5:Exit " << endl;
//         cout << "Enter Choice" << endl;
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             cout << "Enter Element" << endl;
//             cin >> ele;
//             enqueue(ele);
//             break;
//         case 2:
//             dequeue();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             rev();
//             break;
//         case 5:
//             exit(0);
//         default:
//             break;
//         }
//     } while (choice != 5);

//     return 0;
// }

//      LINKED-LIST  IMPLEMENTATION

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

void enqueue(int x)
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

void dequeue()
{
    struct Node *ptrr = head;
    if (head->next != NULL)
    {
        head = head->next;
    }
    else
    {
        head = NULL;
    }

    delete (ptrr);
}

void display()
{
    Node *ptr = head;
    if (head == NULL)
    {
        cout << "Queue UNDER-FLOW" << endl;
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
int main()
{
    Node l;
    enqueue(100);
    enqueue(200);
    enqueue(300);
    dequeue();
    dequeue();
    dequeue();
    display();

    return 0;
}
