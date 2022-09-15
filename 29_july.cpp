#include <iostream>
using namespace std;

//////////////////////// SINGULAR INHERITENCE /////////////////////
class Base{
        private:
            int p=10;
        protected:
            int a;
            int b;
        public:
            int d;
            int p1=p;
};
class Derived1:public /*(access-specifier)*/ Base{
    public:
    int c;
    void input(){
        c=11;
        cout<<"C is "<<c<<endl;
        a=12;
        cout<<"A is "<<a<<endl;
        cout<<"P1 is "<<p1<<endl;
    }
};
class Derived2:public Derived1{
    private:
        int der2;
    public:
        int marks;
        void input(){
            cin>>c;
            cin>>d;
            cin>>p1;
            cin>>b;
            cin>>a;
        }
};



//////////////////////// MULTIPLE INHERITENCE /////////////////////

class b1{
        public:
        int b1;
            void input(){
                cout<<"ENTER B1"<<endl;
                cin>>b1;
            }
};
class b2{
        public:
            int b2;
            void input(){
                cout<<"ENTER B2"<<endl;
                cin>>b2;
            }
};
class b3:public b1,b2{
    public:
    int b3;
};
    int d=0;
class objects{
    public:
    objects(){
        d++;
    }

};
int main()
{
    // INHERITENCE   start with level 0 (parent class)
            // base class or PARENT CLASS
            // derived class or CHILD CLASS
    
    
    // Private data of PARENT CLASS cannot be accessed by CHILD CLASS

 ///////////////////////////// SINGLE & MULTI-LEVEL INHERITENCE //////////////////////////////

    // Derived D1;
    // D1.input();
    // D1.d=100;
    // cout<<"D is "<<D1.d<<endl;

    //  Derived2 d2;
    //  d2.input();
 ///////////////////////////// SINGLE & MULTI-LEVEL INHERITENCE //////////////////////////////





//**************************************** MULTIPLE INHERITENCE *************************************//
    b3 b;
 //   b.input();   // ambiguity error (semantic error)

//*************************************** MULTIPLE INHERITENCE *******************************/




///////////////////////// HEIRARICHAL INHERITENCE /////////////////////////////

//                        B
//                       / \  
//                      /   \
//                     D     E                       TREE-LIKE STRUCTURE
//                   /  \     \
//                  /    \     \
//                d1     d2     e1



// objects o1;
// objects o2;
// objects o3;
// objects o4;
// objects o5;
//     cout<<d<<endl;



        ///  QUESTIONS



int n1,n2;
cout<<"ENTER ELEMENTS OF ARRAY 1"<<endl;
cin>>n1;
int arr1[n1];
cout<<"ENTER ELEMENTS OF ARRAY 2"<<endl;
cin>>n2;
int arr2[n2];
cout<<" ENTER IN ARRAY 1 : "<<endl;
for (int i = 0; i < n1; i++)
{
    cin>>arr1[i];
}
cout<<"ENTER IN ARRAY 2 : "<<endl;
for (int i = 0; i <n2; i++)
{
    cin>>arr2[i];
}
int arr3i=0;
int arr3[arr3i];
int arr4i=0;
int arr4[arr4i];
for (int i = 0; i < n1; i++)
{
    for (int j = 0; j < n2; j++)
    {
        if (arr1[i]==arr2[j])
        {
            arr3[arr3i]=arr1[i];
            arr3i++;
        }
    }
    
}
cout<<"INTER-SECTION : ";
for (int i = 0; i < arr3i; i++)
{
    cout<<arr3[i]<<" ";
}
// for (int i = 0; i < arr3i; i++)
// {
//     arr4[i]=arr3[i];
//     arr4i++;
// }
for (int i = 0; i < n1; i++)
{
    for (int i1 = 0; i1 < arr4i; i++)
    {
        if(arr4[i1]>=arr1[i]){
                
        }

    }
    
}
cout<<"UNION : ";
for (int i = 0; i < arr4i; i++)
{
    cout<<arr4[i]<<" ";
}


            //  FIND UNION AND INTERSECTION OF TWO-SORTED ARRAYS
//  WRITE A PROGRAM TO MERGE TWO-SORTED ARRAYS
//  MOVE ALL NEGATIVE ELEMENTS TO ONE-SIDE OF ARRAY
//  FIND IF THERE IS ANY SUB-ARRAY WITH THE SUM=0  





    return 0;
}
