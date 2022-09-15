#include<iostream>
#include<set>
using namespace std;
int main()
{
        set<int>s2;
        s2.insert(4);
        s2.insert(3);
        s2.insert(2);
        s2.insert(1);
       set<int>::iterator i2;
       cout<<"SET S1 :"<<" ";
       for ( i2 = s2.begin(); i2 != s2.end(); i2++)
       {
         //   cout<<*i2<<" ";
       }
       
       cout<<endl;
       
        set<int,greater<int>>s1; // decreasing-order
        set<int,greater<int>>::iterator i;
        s1.insert(1);
        s1.insert(2);
        s1.insert(3); 
        s1.insert(4);
        cout<<"DECRESING-ORDER SET: "<<" ";  
        for ( i = s1.begin(); i !=s1.end(); i++)
        {
          //  cout<<*i<<" ";
        }
        cout<<endl;
        i=s2.find(2);
        if(*i==2){
            cout<<"ELEMENT FOUND"<<endl;
        }
        s2.erase(2);
        cout<<"ELEMENT ERASED"<<endl;
        cout<<"new SET: "<<" ";  
        for ( i2 = s2.begin(); i2 !=s2.end(); i2++)
        {
            cout<<*i2<<" ";
        }
        cout<<endl;
        
        multiset<int>m1;
        m1.insert(1);
        m1.insert(1);
        multiset<int>::iterator i3;
        cout<<"MULTI SET : ";
        for ( i3 = m1.begin(); i3 != m1.end(); i3++)
        {
          //  cout<<*i3<<" ";
        }
        cout<<endl;
    return 0;
}
