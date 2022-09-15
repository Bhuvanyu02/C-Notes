#include<iostream>
#include<string>
using namespace std;
class Car
{
    private:
       int model;
    protected:
        int maker;
    public:
        int year;
    void input(int m1,int m2){
        model=m1;
        maker=m2;
    } 
    void display();
    friend class Car1;
};
 void Car::display(){

    cout<<"Model car: "<<model<<"  Maker car : "<<maker<<endl;
}
class Car1{
    public:
        void input(Car &t){    // if & is not provided values are stored in temporary memory and will not be provided to the parent class.
            cout<<"ENTER MODEL AND MAKER"<<endl;
            cin>>t.model>>t.maker;
            cout<<"Model car1: "<<t.model<<"   Maker car1: "<<t.maker<<endl;
        }
        void display(Car &t){
            cout<<"Model car1: "<<t.model<<"   Maker car1: "<<t.maker<<endl;
        }

};
class Car2{
    private:
        int model;
        float cost;
        string *color;

    public:
    // Car2(){   // default Constructor
    //     model=2022;
    //     cost=1234.56;
    //     *color="Black";
    // }
    Car2(int m,int c){   // PARAMETERISED CONSTRUCTOR
            model=m;
            cost=c;
            color=new string("kala");
    }
    Car2(Car2 &t1){ // COPY CONSTRUCTOR
        model=t1.model;
        cost=t1.cost;
        color=t1.color;
    }
    ~Car2(){ // DESTRUCTOR
        cout<<"Destructor"<<endl;
    }
    void display();

};
void Car2::display(){
    cout<<" MODEL OF CAR2: "<<model<<"  COST OF CAR2:"<<cost<<"  COLOR : "<<*color<<endl;
}
int main()
{
    //Car c;
    // c.model=21;  PRIVATE and PROTECTED  cannot be acessed out of the class
    // c.maker=23;
    //  c.year=2002;
    // c.input(21,22);
    // c.display();
    // cout<<c.year<<endl;
        // Car1 c1;
        // c1.input(c);
        // c1.display(c);
        // c.display();
    
                // CLASS
    

        Car2 c2(1,2);
        Car2 c3=c2;
        c3.display();
        
   /// CLASS WITH CONSTRUCTOR and DESTRUCTOR
     

            /// DYNAMIC MEMORY ALLOCATION CAN  BE DONE BY USING   new  ....

    return 0;
}
