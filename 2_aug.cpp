#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
class Base{
    public:
    virtual void display()=0; // PURE virtual Function
        void display1(){  // if virtual not written, output will be BASE , else output will be DERIVED
                                    // Virtual written so, it will not be considered if DISPLAY is available in Derived...
            cout<<"BASE"<<endl;
        }
};
class Derived:public Base{
    public:
        void display(){
            cout<<"Derived"<<endl;
        }

};
int main()
{
    // Derived d1;
    // Base *b1;
    // b1=&d1;
    // b1->display();  
    //                     // if virtual not written, output will be BASE , else output will be DERIVED
                        // Virtual written so, it will not be considered if DISPLAY is available in Derived...
    
    // Virtual Function /     Pure Virtual Function             /                       Abstract Class
//                         virtual fn with no definition                        at least one pure virtual fn
    
    
    
            //int *array1{new int[5]{1,2,3,4,5}};        when size is known

    // ALWAYS TAKE a Pointer WHEN ACCESSING MEMORY AT rum time.... 
    // int n;
    // cout<<"ENTER NUMBER OF ELEMENTS"<<endl;
    // cin>>n;
    // int *a1=new int(n);
    // cout<<"ENTER DATA"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //    cin>>a1[i];
    // }
    // //delete (a1);   memory created was freed and output is garbage value
    // cout<<"ARRAY : ";
    // for (int i = 0; i < n; i++)
    // {
    //         cout<<a1[i]<<" ";
    // }
    
            // DYNAMIC ALLOCATION OF AN ARRAY using NEW keyword
    
    
    
    //char n1[6]={'h','e','l','l','o'};  // one extra character in num 
    //char *ptr;
    //ptr=n1;
    //cout<<ptr;  // output is NOT ADDRESS , it's [hello].... 
                    // output of *ptr is [h], the first character
    // if (n1[5]==NULL)
    // {
    //     cout<<"OMPHOO";
    // }                             *Last value of char ARRAY is NULL*
    
        


        // char name[10];
        // cin.get(name,5); // takes 4 input and last char is NULL
        // cout<<sizeof(name);



 //       string n="Hello";
    //     cout<<sizeof(n);    size will be 32
        // n.push_back('y'); // only single character is added at the back the string   
        // n.resize(3); // output [Hel]
        // n.pop_back();
        // cout<<n;

        // string n1="abcd";
        // string n="lsd";
        // n.swap(n1);
        // cout<<n1<<" "<<n;
        
    char name[]="saiyaan";
    char name1[]=" saiyaaaaaaan";
    strcat(name,name1);
    cout<<name;
    return 0;
}
