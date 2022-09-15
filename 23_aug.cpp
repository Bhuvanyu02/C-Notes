#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<class t>
class omphoo{
    private:
        t a;
        t b;
    public:
        omphoo(t a1,t b1){
                a=a1;
                b=b1;
        }
        t   add(){
            return a+b;
        }
};
//template<typename t>     //  CPP supports normal programming as well as oops
// t square(t x){
//     return x*x;
//}
int main()
{
    // vector <int> v1{1,2,3};
    // vector<int>::iterator i;
    // int a;
    // for (int j = 1; j < 4; j++)
    // {
    //     cout<<"ENTER VALUE"<<endl;
    //     cin>>a;
    //     i=v1.begin();
    //     v1.insert(i,a);

    // }
    // for (auto i = v1.begin(); i != v1.end(); i++)
    // {
    //         cout<<*i<<" ";
    // }
    


//                          TEMPLATES
//                SYNTAX :-           template < typename  t >

        // int a=8;
        // float x=9;
        // double y=10;
        // cout<<square(a)<<" "<<square(x)<<" "<<square(y)<<" "; 

    omphoo<int> addint(8,9);
    omphoo<float>addf(2.2,3.2);
    omphoo<double>addd(9.3,9.2);
    // cout<<addint.add()<<endl;
    // cout<<addf.add()<<endl;
    // cout<<addd.add()<<endl;



//                               EXCEPTIONAL HANDLING      ( try , throw , catch )

//    try -> may contain anomaly              throw -> anomaly occur/found and give anomaly to catch        catch-> execute written statement   
// float x=-1.8;
// try{
//     if(x<0){
//         throw x;
//         cout<<"try block"<<endl;
//     }
// }
// // catch(float){
// //     cout<<"float catch"<<endl;
// // }
// // catch(int){
// //     cout<<"int catch"<<endl;
// //}

// catch(...){     // CAN HANDLE ANY TYPE OF ARGUMENT (int ,float,double) 
//     cout<<"catch omphoo"<<endl;
//}


//                             ******     LIST     ******
//list<int>l1{1,2,3}; // doubly linked list
// for (auto i = l1.begin(); i != l1.end(); i++)
// {
//     cout<<*i<<" ";
// }
// cout<<endl;
// l1.push_front(21);
// l1.push_back(21);
// cout<<"NEW LIST "<<": ";
// for (auto i = l1.begin(); i != l1.end(); i++)
// {
//     cout<<*i<<" ";
// }
// cout<<endl;
// list<int>::iterator i1;
// i1=l1.begin();
// l1.insert(i1,30000);
// cout<<"NEW LIST :"<<" ";
// for (auto i = l1.begin(); i != l1.end(); i++)
// {
//     cout<<*i<<" ";
// } 
// cout<<endl;
//cout<<l1.front()<<" "<<l1.back()<<endl;



    return 0;
}
