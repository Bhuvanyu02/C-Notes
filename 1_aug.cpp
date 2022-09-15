#include <iostream>
using namespace std;
class Base
{
public:
   virtual void display()
    {
        cout << " display of base" << endl;
    }
};
class Derived : public Base
{
public:
     void display()
    {
        cout << "display of derived" << endl;
     //   Base::display(); // will also display of BASE;
    }
};
class ADD
{
public:
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(int a, float b)
    {
        cout << a + b << endl;
    }
    void add(float a, int b)
    {
        cout << a + b << endl;
    }
    void add(float a, float b)
    {
        cout << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
};
class operator_overloading {
    private:
       // int real;
       // int imaginary;
        int a;
    public:
        operator_overloading(){
        //     real=0;
          //   imaginary=0;
             a=0;
        }
        // operator_overloading(int r1,int i1){
        //     real=r1;
        //     imaginary=i1;
        // }
        // operator_overloading operator+(operator_overloading o1){
        //     operator_overloading o2;
        //     o2.real=real+o1.real;
        //     o2.imaginary=imaginary+o1.imaginary;
        //     return o2;
        // }
     void  operator ++(){
            a++;
        }
     void operator --(){
            a--;
        }
        void display(){
               // cout<<real<<" "<<imaginary<<endl;
               cout<<a<<endl;
        }

};

int main()
{
    // Derived d1;
    // d1.Base::display(); // Display of base ONLY;
    // d1.display(); // showing DISPLAY OF DERIVED
    // FUNCTION OVER-LOADING

    //  POLYMORPHISM
    //           i> COMPILE time --> function overloading && operator overloading
    //         ii> RUN  time --> Virtual Function

    //  ADD a1;
    // a1.add(9,0);
    // a1.add(2,2.2f); //  use f for float //
    // a1.add(2.2f,2);
    // a1.add(1.2f,2.2f);
    // a1.add(1,2,3);
    


//   USE operator keyword using operator overloading
//   example operator+
//    operator_overloading o3(2,3);
//    operator_overloading o4(2,2);
//    operator_overloading o5;
//        o5=o3+o4;
//        o5.display();

// operator_overloading w1;
// ++w1;
// w1.display();
// --w1;
// w1.display();
                /// OPERATOR OVERLOADING
//      .        *     sizeof()        ::                     ?                   cannot be overloaded
//     dot   pointer               scope resolution      turnary operator


    Base b1;
    b1.display();
    Derived d1;
    d1.display();

            // VIRTUAL FUNCTIONS
    return 0;
}
