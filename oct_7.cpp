// QUEUE USING STACKS
#include <bits/stdc++.h>
using namespace std;
stack<long long> s1;
stack<long long> s2;
void enqueue()
{
    int a;
    cout << " Enter Number" << endl;
    cin >> a;
    while (!s1.empty())
    {
        int b = s1.top();
        s1.pop();
        s2.push(b);
    }
    s1.push(a);
    while (!s2.empty())
    {
        int c = s2.top();
        s2.pop();
        s1.push(c);
    }
}
void dequeue()
{
    if(!s1.empty()){
        int a = s1.top();
    s1.pop();
    cout << a << " popped" << endl;
    }
    else{
        cout<<"Under-Flow"<<endl;
    }
    
}
void display()
{
    if (s1.empty())
    {
        cout << "NO ELEMENTS IN STACK" << endl;
    }
    else
    {
        cout << "Elements are ";
        stack<long long> s3 = s1;
        while (!s3.empty())
        {
            int d = s3.top();
            cout << d << " ";
            s3.pop();
        }
        cout << endl;
    }
}
int main()
{
    int a;
    do
    {
        cout << "1->Enqueue  2->Dequeue  3->Display   4->Exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (a != 4);

    return 0;
}
