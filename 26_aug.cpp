#include<iostream>
#include<queue>
#include<map>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    queue<int> q2;
    q2.push(100);
    q2.push(200);
    q2.push(300);
        q.swap(q2);
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    
    map<char,int>m1;
    m1['a']=1;
    // key(unique)  value(duplicate)
    m1['b']=2;
    m1['c']=3;
    m1['d']=4;
        map<char,int>::iterator i;
   // m1.insert({'a',6});    // VALUE OF  doesnot change
   // m1['a']=8;  // change value with only assigning the value to the key
    // for (i=m1.begin(); i !=m1.end(); i++)
    // {   
    //         cout<<i->first<<" : "<<i->second<<endl;
    // }
   map<char,int>m2;
   m2.swap(m1);
   for (i=m2.begin(); i !=m2.end(); i++)
    {   
            cout<<i->first<<" : "<<i->second<<endl;
    }
  // cout<< m2.empty()<<endl;
    
    
    //m2.erase('a');
    
    
    //  for (i=m2.begin(); i !=m2.end(); i++)
    // {   
    //         cout<<i->first<<" : "<<i->second<<endl;
    // }
   
   // m2.clear();
    //  for (i=m2.begin(); i !=m2.end(); i++)
    // {   
    //         cout<<i->first<<" : "<<i->second<<endl;
    // }
   
    return 0;
}
