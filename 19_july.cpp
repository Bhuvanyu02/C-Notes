#include <iostream>
using namespace std;

int add(int a,int b){
  return (a+b);
} /// FUNCTION PROTOTYPE
int sub(int a,int b){
  return (a-b);
}
int mul(int a,int b){
  return (a*b);
}
int divd(int a,int b){
  return (a/b);
}
int fact(int x){
  if (x==1 || x==0)
  {
    return 1;
  }
  else{
    return (x*fact(x-1));
  }
  
}

int main()
{
    // int r, c;
    // cout << "ENTER NUMBER OF ROWS AND COLUMNS" << endl;
    // cin >> r >> c;
    // int arr[r][c];
    // int arr2[r][c];
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << "ENTER VALUE FOR " << i << " ROW AND " << j << " COLUMN" << endl;
    //         cin >> arr[i][j];
    //     }
    // }
    // cout << " LOWER TRIANGLE ELEMENTS : ";
    // int sumu = 0;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (i > j)
    //         {
    //             cout << arr[i][j] << " ";
    //             sumu += arr[i][j];
    //         }
    //     }
    // }
    // cout << endl;
    // cout << "SUM OF LOWER TRIANGLE ELEMENTS IS " << sumu << endl;
    // cout << " UPPER TRIANGLE ELEMENTS : ";
    // int sumL = 0;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (i < j)
    //         {
    //             cout << arr[i][j] << " ";
    //             sumL += arr[i][j];
    //         }
    //     }
    // }
    // cout << endl;
    // cout << "SUM OF UPPER TRIANGLE ELEMENTS IS " << sumL << endl;

            //  UPPER AND LOWER TRIANGLE ELEMENTS IN A MATRIX

    // constexpr int i{2+3};  
    // cout<<i<<endl;
       // expresion should be constant, only const values , if not , error will appear.
    




  //  cout<<static_cast <float>(5) / static_cast <float>(3);
    

  // int x=8;
  // cout<< x<<endl;
  // {
  //   int x=6;
  //   cout<<x<<endl;   // alag block hai yeh 

  //   // no error
  // }    

    // output   8  and 6
   
        // LOCAL VARIABLES
   
  //FORWARD DECLARATION AND DEFINITION  FOR A FUNCTION IS A MUST

  // int a=8;int b=2;
  // cout<<add(a,b)<<endl;
           // FUNCTIONS
  
  
   // cout<<"THE FACTORIAL IS "<<fact(5)<<endl;  
        // FACTORIAL FUNCTION
     
    // z=a+b+c*d/e-c*f/k;
    // int a=1;
    // int b=1;
    // int c=1;
    // int d=1;
    // int e=1;
    // int f=1;
    // int k=1;


    // int a1=divd(d,e);
    // int a2=divd(f,k);
    // int b1=mul(c,a1);
    // int b2=mul(c,a2);
    // int b3=add(a,b);
    // int b4=add(b3,b2);
    // int ans=sub(b4,b1);
    // cout<<"ANSWER IS "<<ans<<endl;
          // MAKE 4 FUNCTIONS AND PROVIDE THE ARGUMENTS

    // int x=9;
    //  int arr[4]={1,2,3,4};
    //  int *y=NULL;
    //  y=arr;  //  IT POINTS TO FIRST ADDRESS OF ARRAY (IF & NOT THERE )                        // IF y NOT NULL GARBAGE ADDRESS VALUE APPEARS
     
    //  y++;
    //  cout<<*y<<endl;
    //  y++;
    //  cout<<*y<<endl;
    //  y++;
    //  cout<<*y<<endl;    
          // PRINTING NEXT ELEMENTS IN THE ARRAY
    

    return 0;
}
