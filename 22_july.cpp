#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //    unsigned int i=pow(2,32);
    //     while(i++ !=0){
    //         cout<< ++i <<endl;
    //    }
   
    // void *ptr;  // can take a value of any data-type
    // char a='a';
    // ptr=&a;
    // cout<<sizeof(ptr)<<endl;
    // int t=0;
    // ptr=&t;
    // cout<<sizeof(ptr)<<endl;
            // ANSWER IS A mystery


    // int *ptr[5];
    // int a[5]={1,2,3,4,5},i=0;
    // while (i<5)
    // {
    //     ptr[i]=&a[i];
    //     i++;
    //     ptr[i]++;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*ptr[i]<<" ";
    // }
    
    int *ptr=NULL;
    int **ptr1=NULL;
    int a=8;
    ptr=&a;
    ptr1=&ptr;
    cout<<**ptr1;
            // * WILL OUTPUT ADDRESS OF PTR,  ** WILL SHOW VALUE OF A 
    

    return 0;
}
