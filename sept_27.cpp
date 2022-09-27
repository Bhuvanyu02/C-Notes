#include <bits/stdc++.h>
using namespace std;
int front = -1;
int rear = -1;
int q[5];
int size = 5;
void enqueue(int ele)
{
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        cout << "Over-flow" << endl;
    }
    else if (front == -1)
    {
        front = rear = 0;
        q[rear] = ele;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        q[rear] = ele;
    }
    else
    {
        rear++;
        q[rear] = ele;
    }
}

void display()
{
    int k = 0;
    if (front == -1)
    {
        cout << "Under-flow" << endl;
        return;
    }
    else
    {
        cout << "Elements : ";
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                if (k % 2 != 0)
                {
                    cout << q[i] << " ";
                }
                k++;
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                if (k % 2 != 0)
                {
                    cout << q[i] << " ";
                }
                k++;
            }
            for (int i = 0; i <= rear; i++)
            {
                if (k % 2 != 0)
                {
                    cout << q[i] << " ";
                }
                k++;
            }
        }
    }
    cout << endl;
}
void display2()
{
    int k = 0;
    int min;
    if (front == -1)
    {
        cout << "Under-flow" << endl;
        return;
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                if (q[i] < min)
                {
                    min = q[i];
                }
                if (k % 2 != 0)
                {
                    cout << " Min Element upto " << k << " is " << min << endl;
                }
                k++;
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                if (q[i] < min)
                {
                    min = q[i];
                }
                if (k % 2 != 0)
                {
                    cout << " Min Element upto " << k << " is " << min << endl;
                }
                k++;
            }
            for (int i = 0; i <= rear; i++)
            {
                if (q[i] < min)
                {
                    min = q[i];
                }
                if (k % 2 != 0)
                {
                    cout << " Min Element upto " << k << " is " << min << endl;
                }
                k++;
            }
        }
    }
    cout << endl;
}

int main()
{
    // Q1 pop elements at even places in stack

    //     int n;
    //     cout << "Enter size of stack" << endl;
    //     cin >> n;
    //     stack<int> s;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         int a;
    //         cin >> a;
    //         s.push(a);
    //     }
    //     stack<int> s2;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         int a = s.top();
    //         if (i % 2 != 0)
    //         {
    //             s2.push(a);
    //         }
    //         s.pop();
    //     }

    //     while (!s2.empty())
    //     {
    //         int a=s2.top();
    //         s.push(a);
    //         s2.pop();
    //     }
    //     cout<<"ELEMENTS IN NEW STACK : ";
    //    while (!s.empty())
    //    {
    //         int a=s.top();
    //         cout<<a<<" ";
    //         s.pop();
    //    }

    //     Q2   given a stack, reverse the first half of elements, put it back into stack and return it

    // int n;
    // cin>>n;
    // stack<int>s2;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin>>a;
    //     arr[i]=a;
    // }
    // for (int i =0; i <n/2; i++)
    // {
    //     s2.push(arr[i]);
    // }
    // for (int i = 0; i <n/2; i++)
    // {
    //     int a=s2.top();
    //     arr[i]=a;
    //     s2.pop();
    // }

    // for (int i = 0; i < n; i++)
    // {
    //         cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //   Q3  print odd index in queue , i=0;
    // for (int i = 0; i < size; i++)
    // {
    //     int a;
    //     cin >> a;
    //     enqueue(a);
    // }
    // display();

    // Q4  find minimum upto odd indexes

    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // int min;
    // int j=1;
    // while (j<n)
    // {
    //     for (int i = 0; i <= j; i++)
    //     {
    //         if (arr[i]<min)
    //         {
    //             min=arr[i];
    //         }

    //     }

    //     cout<<"Minimum Element till "<<j<<" is "<<min<<endl;
    //     j+=2;
    // }

    //  Q5  find minimum upto odd indexes in queue  ,,  front=1;

    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a;
        enqueue(a);
    }
    display2();

    return 0;
}
