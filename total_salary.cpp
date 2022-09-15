#include<iostream>
using namespace std;
int main()
{
    float n;
    cout<<"ENTER BASIC SALARY"<<endl;
    cin>>n;
    if (n<=5000.0)
    {
        float total=n+(0.04*n);
        cout<<total<<endl;
    }
    else if(n<=10000.0){
        float total=n+(0.06*n);
        cout<<total<<endl;
    }
    else if(n<=15000.0){
        float total=n+(0.065*n);
        cout<<total<<endl; 
    }
    else{
        float total=n+(0.085*n);
        cout<<total<<endl;
    }
    return 0;
}
