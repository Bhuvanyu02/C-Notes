//  STACKS
//      Used in : Fn call, Infix to Postfix, Expression Calculation
// Functions:-  Pop, Push, Top

//  IN-FIX   :  Left Root Right
//  PRE-FIX  :  Root Left Right   
//  POST-FIX :  Left Right Root

// PEMDAS
//  Left to Right Associavity         

// #include <bits/stdc++.h>
// using namespace std;
// int index1 = 0;
// int stack1[100];
// void push(int v)
// {
//     stack1[index1] = v;
//     index1++;
//     cout << "Value " << v << " Entered in the Stack" << endl;
// }
// void pop()
// {
//     if (index1 <= 0)
//     {
//         cout << "STACK-UNDERFLOW" << endl;
//         index1=0;
//     }
//     else
//     {
//         int t = stack1[index1 - 1];
//         stack1[index1 - 1] = 0;
//         index1--;
//         cout << "Element " << t << " popped" << endl;
//     }
// }
// void Top()
// {
//     cout << "Top : " << stack1[index1 - 1] << endl;
// }
// void Display()
// {
//     cout<<"ELEMENTS IN STACK : ";
//     for (int i = index1 - 1; i >= 0; i--)
//     {
//         cout << stack1[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int a;
//     do
//     {
//         cout << endl;
//         cout << "Enter Option :  1 -> Push   2-> Pop  3-> Top  4-> Display  5-> Exit" << endl;
//         cin >> a;

//         switch (a)
//         {
//         case 1:
//             cout << "Enter Value" << endl;
//             int val;
//             cin >> val;

//             push(val);
//             break;
//         case 2:
//             pop();
//             break;

//         case 3:
//             Top();
//             break;
//         case 4:
//             Display();
//             break;
//         }

//     } while (a != 5);

//     return 0;
// }

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int count = 0;
struct Node *head = NULL;
void push(int x)
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
        cout << "STACK UNDER-FLOW" << endl;
    }
    else
    {
        cout<<"Elements : ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}
void pop()
{
    struct Node *ptr1 = head;
    head = head->next;
    delete (ptr1);
}
void Top(){
    cout<<"Top : "<<head->data<<endl;
}
int main()
{
    // Singly Linked List
    int a;
    do
    {
        cout << endl;
        cout << "Enter Option :  1 -> Push   2-> Pop  3-> Top  4-> Display  5-> Exit" << endl;
        cin >> a;

        switch (a)
        {
        case 1:
            cout << "Enter Value" << endl;
            int val;
            cin >> val;

            push(val);
            break;
        case 2:
            pop();
            break;

        case 3:
            Top();
            break;
        case 4:
            display();
            break;
        }

    } while (a != 5);

    return 0;
}
