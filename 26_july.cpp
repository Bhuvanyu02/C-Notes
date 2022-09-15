#include<iostream>
#include<string>
using namespace std;
void fact(int *ptr){
    int ans=1;
    for (int i = 1; i <= *ptr; i++)
    {
        ans*=i;
    }
    cout<<ans;
}
struct Student
{
    int age,id;
    string name;
};
union Student2
{
    int age,id;
};
void display (struct Student s){
        cout<<"ENTER NAME"<<endl;    
    string a;
    cin>>a;
    s.name=a;
    int a1,b;
    cout<<"Age of "<<s.name<<endl;
    cin>>a1;
    s.age=a1;
    cout<<"Enter Id of "<<s.name<<endl;
    cin>>b;
    s.id=b;
    cout<<"-------------"<<endl;
        cout<<s.name<<" "<<s.age<<" "<<s.id<<endl;
}
class Record
{
    //private:
    public:
    Record(/* args */);
    ~Record();
};

int main()
{
   // int x;
   // cin>>x;
   //  fact(&x);
        // FACTORIAL WITH HELP OF POINTERS

//     int n;
//     cout<<"ENTER THE NUMBER OF STUDENTS"<<endl;
//     cin>>n;
//     Student s[n];
//     for (int i = 0; i <n; i++)
//     {
//     cout<<"ENTER NAME OF THE STUDENT"<<endl;
//   // getline(cin,s[i].name);
//     cin>>s[i].name;
//     int a,b;
//     cout<<"Age of "<<s[i].name<<endl;
//     cin>>a;
//     s[i].age=a;
//     cout<<"Enter Id of "<<s[i].name<<endl;
//     cin>>b;
//     s[i].id=b;
//     cout<<"-------------"<<endl;
//     cout<<s[i].name<<" "<<s[i].age<<" "<<s[i].id<<endl;
        
//     }
            // STRUCTURE IMPLEMENTATION
        
 //   Student s;
 //   display(s);

        // STRUCTURE AND FUNCTION



    // Student2 s;
    // s.age=12;
    // Student2 s1;
    // s1.id=121;
    // cout<<s.age<<"  "<<s1.id<<endl;
            // IN UNION WE HAVE TO DECLARE AS MANY OBJECTS AS DATA MEMBERS


    // Student *s2=&s;
    // cout<<s2->age;
    //      WHILE USING PONTERS WE HAVE TO USE (ARROW FUNCTION) ->  //


                //*    sizeof( struct )  is total size of its components  *//


                // *  in case of  UNION  sizeof(union) is biggest size among the components *// 
    

    
    return 0;
}
