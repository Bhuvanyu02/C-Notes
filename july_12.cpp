#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
 {  // char ch;
//     cin>>ch;
//     switch (ch)
//     {
//     case 'A':
//     case 'a':
//     case 'E':
//     case 'e':
//     case 'I':
//     case 'i':
//     case 'O':
//     case 'o':
//     case 'U':
//     case 'u':
//         cout<<"VOWEL"<<endl;
//         break;
//     default:
//     cout<<"ALPHABET"<<endl;
//         break;
//     }
    // check character is vowel or alphabet


// float a,b;
// cin>>a>>b;
// cout<<"ENTER OPERATOR  + - * /"<<endl;
// char op;
// cin>>op;
// switch (op)
// {
// case '+':
//     cout<<"SUM IS "<<a+b<<endl;
//     break;
// case '-':
//     cout<<"DIFFERNECE IS "<<a-b<<endl;
//     break;
// case '*':
//     cout<<"MULTIPLIED ANSWER IS "<<a*b<<endl;
//     break;
// case '/':
//     cout<<"THE QUOTIENT IS "<<a/b<<endl;
//     break;

// default:
//     cout<<"Please ENTER the given operators"<<endl;
//     break;
// }
    // SIMPLE CALCULATOR

// char ch;
// cin>>ch;
// cout<<(int)ch<<endl; // type-casting (changing string value to int)
    // Printing ASCII value of character


// int a=5;
// float x;
// x=float(a)/2.0;
//cout<<x;
     //  EXPLICIT - TYPE CASTING


// int a=5;
// float x;
// x=a/2;
// cout<<x;   // RESULT = 2.0   (but complier is showing 2);
    // IMPLICIT - TYPE CASTING 


// int n1,n2;
// cout<<" DIVISON !!!   ENTER TWO NUMBERS"<<endl;
// cin>>n1>>n2;
// cout<<" QOUTIENT IS "<<n1/n2<< " "<<" REMAINDER IS "<<n1%n2<<endl;
    // QUOTIENT AND REMAINDER


// cout<<sizeof(int)<<endl;
    // SIZE OF INT,FLOAT,DOUBLE AND CHARACTER

// int a,b;
// cin>>a>>b;
// int temp=a;
// a=b;
// b=temp;
// cout<<a<<" "<<b<<endl;
    // SWAP TWO NUMBERS

// string s;
// getline(cin,s);  // can take spaces as characters
// cout<<s<<endl;
    // strings
   
// float a,b,c;
// cin>>a>>b>>c;
// float root1,root2;
// float d= (b*b)-(4.0*a*c);
// if (d>0.0)
// {
//     cout<< "Root 1 = "<<(-b+sqrt(d))/(2.0*a)<<" Root 2 = "<<(-b-sqrt(d))/(2.0*a)<<endl;

// }
// else if(d==0.0) {
//         cout<< "Root 1 = Root 2 = "<<-b/(2.0*a)<<endl;
// }
// else{
//     cout<< "Root 1 = "<<-b/(2.0*a) <<" + "<<sqrt(d)<<"i    "<<" Root 2 = "<<-b/(2.0*a)<<" - "<<sqrt(d)<<"i"<<endl;
// }
   // ROOTS OF QUADRATIC EQUATION


// int n;
// cin>>n;
// int ans=1;
// while (n>=1)
// {
//     ans*=n;
//     n--;
// }
// cout<<ans;

    //  FACTORIAL USING WHILE LOOP
    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // int ans=0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     ans=a+b;
    //     a=b;
    //     b=ans;

    // }
    // cout<<ans<<endl;

 ///FIBONACCI NUMBERS

// int n;
// cin>>n;
// int r=0;
// while (n>0)
// {
//     int rem=n%10;
//     r= r*10+rem;
//     n/=10;
// }
//cout<<r<<endl;
        // REVERSING A NUMBER
   return 0;

}
