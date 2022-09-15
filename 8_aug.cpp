#include<iostream>
using namespace std;
class ABC{
    public:
        int a;
     inline   void display(){
            cout<<"Display "<<a<<endl;
        }
        void increament(){
            a++;
        }
        void output(){
            cout<<"Output "<<a<<endl;
        }
};
int main()
{
    //ABC a1;
    //a1.display(); // function call is replaced by function definition  &&  it depends on compiler, if it should be converted to in-line or not
    //a1.a=8;
    //a1.increament();
    //a1.output();
        // IN-LINE FUNCTION
                           //  if data-type of a function is not VOID, it will not convert to in-line
                           // cannot work with loops and switch-case statement     
    

//                ***** KEYWORDS *****
            //   Encapsulation  ->  binding of data and functions together
            
            
            //   Data Abstraction  ->   hiding the complexity and hiding the unnecessary details

            //    Information - Hiding ->   data confidentiality / security

// ***************************************************************************************************************************************
// ***************************************************************************************************************************************

//          ALGORITHMS   ->   Instructions/steps should be unambigous (should not contradict each other)
//   Major Concerns while building algo -> SPACE and TIME Complexity


        // Three Notations for Time Complexity -> Big (O)  ,    Omega    ,    Theta
        //               Types of Analysis ->   Worst Case ,  Best Case  ,  Average Case  
        //                                      Upper-bound,   Lower-bound ,  Average-bound / Tight-bound  

                    // int arr[5]={1,2,3,4,5};
                    // int s=4;
                    // int ans=-1;
                    // for (int i = 0; i < 5; i++)
                    // {
                    //     if (arr[i]==s)
                    //     {
                    //         ans=i;
                    //     }
                    // }
                    // cout<<ans<<endl;
//////////////////////////////////  LINEAR SEARCH  //////////////////////////

        // int arr[7]={1,2,3,4,5,6,7};   // for binary search array should be sorted
        // int n=6;
        // int s=0;

        // int search=6;
        // while(s<n)
        // {
        //     int mid =(s+n)/2;
        //     if (arr[mid]==search)
        //     {
        //         cout<<"NUMBER FOUND"<<endl;
        //         break;
        //     }
        //     else if(search>arr[mid]){
        //         s=mid+1;
        //     }
        //     else
        //     {
        //         n=mid-1;
        //     }
        // }
//////////////////////////////////////// BINARY SEARCH //////////////////////////////////////







    return 0;
}
