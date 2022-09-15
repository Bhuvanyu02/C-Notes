#include <iostream>
using namespace std;
int main()
{
    // 14th JULY

    // int a=5;
    // do
    // {
    //     cout<<a<<" ";
    // } while (a<5);   // it runs the loop, check the condition afterwards;

    //  DO-WHILE LOOP

    // int n1, n2;
    // cin >> n1 >> n2;
    // int min = (n1 < n2) ? n1 : n2;
    // int gcd=1;
    // if(n2%min==0 && n1%min==0){
    //     cout<<"GCD = "<<min<<endl;
    // }
    // else{
    //         for (int i = 1; i <= min; i++)
    // {
    //     if (n1%i==0 && n2%i==0)
    //     {
    //         gcd*=i;
    //     }

    // }

    // cout<<"MIN = "<<min<<endl;
    // cout<< "GCD = "<<gcd<<endl;

    // }

    // finding gcd

    // int n;
    // cin>>n;
    // int count=0;
    // for (int i = 2; i <= n/2; i++)
    // {
    //     if (n%i==0)
    //     {
    //         count++;
    //     }

    // }
    // if (count==0)
    // {
    //     cout<<"NUMBER "<<n<<" IS PRIME "<<endl;
    // }
    // else{
    //     cout<<"NUMBER IS NOT PRIME "<<endl;
    // }
    //  NUMBER IS PRIME OR NOT

    // float x;
    // x=1200;
    // printf("%1f",x);

    // printing FLOAT VALUE

    // int a=20;
    // int b =200;
    // int total=0;
    // cout<<"PRIME NUMBERS IN RANGE OF 20 AND 200 ARE: ";
    // while (a!=b)
    // {
    //     int c=0;
    //         for (int i = 2; i < a/2; i++)
    //         {
    //             if (a%i==0)
    //             {
    //                 c++;
    //             }

    //         }
    //         if (c==0)
    //         {
    //             cout<<a<<" ";
    //             total++;
    //         }

    //     a++;
    // }
    // cout<<endl;
    // cout<<"TOTAL PRIME NUMBER ARE "<<total<<endl;

             // PRINTING PRIME NUMBERS BETWEEN 20 AND 200

    // int row;
    // cin>>row;
    // int j=1;

    // for (int i = 1; i <= row; i++)
    // {
    //     int count=0;
    //     while (count<i)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;

    // }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int row;
    // cin>>row;
    // int j=(row*(row+1))/2;
    // for (int i = row; i >= 1; i--)
    // {
    //     int count=i;
    //     while (count>=1)
    //     {
    //         cout<<j<<" ";
    //         j--;
    //         count--;
    //     }
    //     cout<<endl;
    // }

    // working for any number
    // 10 9 8 7
    // 6 5 4
    // 3 2
    // 1

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j<=i-1; j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // int n = 4;
    // int j = n * 2;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == 1 || i == n)
    //     {
    //         int count = 1;
    //         while (count != j)
    //         {
    //             cout << " * ";
    //             count++;
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         cout << " * ";
    //         for (int k = 2; k <= j - 2; k++)
    //         {
    //             cout << "   ";
    //         }
    //         cout << " * " << endl;
    //     }
    // }
        //  *  *  *  *  *  *  * 
        //  *                 * 
        //  *                 * 
        //  *  *  *  *  *  *  * 




        
    return 0;
}
